// cbmc memory-model1.c –trace –trace—show-code –pointer-check
#include<stdio.h>

int main() {
    char *ptr;
    char *m1 = (char *)malloc(12);
    char *m2 = (char *)malloc(24);

    
    m1[10] = 'x';
    m2[20] = 'y';
 
    assert(m1+9 != m2); // NOT violated (allocated memory do not overlap)
    assert(m1 != NULL); // NOT violated (memory failure is not modelled)
 
    // malloc allocates memory filled w/ non-deterministic values
    assert(m1[7] != 'z');  // Violated. 
    assert(m2[17] != 'w'); // Violated 
}
/*
[main.assertion.3] line 17 assertion (signed int)m1[(signed long int)7] != 122: FAILURE
[main.assertion.4] line 18 assertion (signed int)m2[(signed long int)17] != 119: FAILURE
*/