#include"env_setup.c"

void dequeue_verify() {
    unsigned int ret, old_head, old_tail;
    unsigned int old_q[SIZE], i;

    for(i=0; i < SIZE; i++) old_q[i]=q[i];
    old_head=head;
    old_tail=tail;
    __CPROVER_assume(head!=tail); 

    ret=dequeue();

    assert(ret==old_q[old_head]);
    assert(q[old_head]== EMPTY);
    assert(head==(old_head+1)%SIZE);
    assert(tail==old_tail);
    for(i=0; i < old_head; i++) 	
		assert(old_q[i]==q[i]);
    for(i=old_head+1; i < SIZE; i++) 	
		assert(old_q[i]==q[i]);
}

int main() {
	environment_setup();
	dequeue_verify();
}

