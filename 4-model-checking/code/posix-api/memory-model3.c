// cbmc memory-model3.c –trace –trace—show-code –pointer-check
#include<stdio.h>

int main() {
	char *m1 = (char *)malloc(12);
	char *m2 = (char *)malloc(24);
	int a;
	
	m1[10] = 'x';
	m2[20] = 'y';
        
    assert((m1+30)!=(m2+3));   // Not violated. 
    assert((m1+a)!= m2);       // Not violated
	assert(*(m1+30)!=*(m2+3)); // Violated. Also, it fails --pointer-check.

    // undefined func does NOT update memory pointed by a pointer parameter 
	undef_func1(m1); 
    assert(m1[10] == 'x'); // Not violated

	free(m1);
	assert(m1[7] != 'z');   //violated. Also, it fails --pointer-check.
}