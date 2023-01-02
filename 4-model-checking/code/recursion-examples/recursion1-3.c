
#include<stdio.h>
#include<assert.h>

unsigned char sum(unsigned char x) {
	printf("sum(%d) is called\n", x);

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

	if (x==0) return 0;
	else return x+sum(x-1);
}