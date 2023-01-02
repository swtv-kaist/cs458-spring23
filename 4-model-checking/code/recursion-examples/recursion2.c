#define MAX_DEPTH 3 
#include<stdio.h>
#include<assert.h>

unsigned char depth=1;

// idx:  0  1  2  3  4  5 ...
// F#:   0, 1, 1, 2, 3, 5,... 
int fibbo(unsigned char x) {  // x must be a non-negative number.
	printf("fibbo(%d) is called at depth %d\n", x, depth);
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


	if (x <= 1) return x;
	else { depth++; return fibbo(x-1) + fibbo(x-2);}
}

int main() {
	depth=1;
	printf("fibbo(5)=%d\n", fibbo(5));
	// Note that cbmc automatically unwinds recursion properly 
	// even w/o --unwind <N> for this simple recusion example
	// of fibbo(5). 
}
