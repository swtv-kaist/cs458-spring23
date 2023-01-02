#define MAX_DEPTH 3
#include<stdio.h>
#include<assert.h>

unsigned char depth=1;

unsigned char sum(unsigned char x) {
	int ret = 0;

	printf("sum(%d) is called at depth %d\n", x, depth);
	if (depth > MAX_DEPTH) assert(0);

	// 1. Note a different meaning of --unwind for recursion
	//    compared to --unwind for iteration
	// 2. --unwinding-assertions does NOT work for resurcion
	//    since recursion does not have a termination 
	//    condition necessary for --unwingind-assertions

	// cbmc --unwind 1 does NOT report the violation
	// cbmc --unwind 2 does NOT report the violation
	// cbmc --unwind 3 does     report the violation

	// cbmc --unwind 1 --unwinding-assertions does 
	// NOT report the violation, NOR unwinding violation

	if (x==0) ret = 0;  
	else { depth++; ret = x+sum(x-1); depth--;}

	return ret;
}

int main() {
	depth=1;
	printf("sum(10)=%d\n",sum(10));
	// Note that cbmc automatically unwinds recursion properly 
	// even w/o --unwind <N> for this simple recusion example
	// of sum(10). 
}
