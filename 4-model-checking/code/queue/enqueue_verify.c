#include"env_setup.c"

void enqueue_verify() {
    unsigned int x, old_head, old_tail;
    unsigned int old_q[SIZE], i;
    __CPROVER_assume(x>0);

    for(i=0; i < SIZE; i++) old_q[i]=q[i];
    old_head=head;
    old_tail=tail;

    enqueue(x);

    assert(q[old_tail]==x);
    assert(tail== ((old_tail +1) % SIZE));
    assert(head==old_head);
    for(i=0; i < old_tail; i++) 	assert(old_q[i]==q[i]);
    for(i=old_tail+1; i < SIZE; i++) 	assert(old_q[i]==q[i]);
}

int main() {// cbmc enqueue_verify.c –unwind SIZE+2
    environment_setup();
    enqueue_verify();}

