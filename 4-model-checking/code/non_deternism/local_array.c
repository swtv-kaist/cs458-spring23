#include<assert.h>

int main() {
	// non-deterministic values assigned
	unsigned char x[5]; 
    if( x[0]==1 && x[1]==1 && x[2]==9) assert(0);	
}
