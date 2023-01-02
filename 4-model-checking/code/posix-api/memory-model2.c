// cbmc memory-model2.c –trace –trace—show-code –pointer-check
#include<stdio.h>
char gv='g';
int main() {
    char *ptr;
    char *m1 = (char *)malloc(12);
    char lv ='l';
    
    m1[10] = 'x';
 
    // A non-deterministic pointer can point to any memory
    // including dynamic alloc. memory, global/local variables
    assert(ptr != (m1+10));  // Violated
    assert((ptr+1) != &gv);  // Violated
    assert((ptr+2) != &lv);  // Violated
    assert(*(ptr+5) != m1[10]);  // Violated. Also it fails -pointer-check
}