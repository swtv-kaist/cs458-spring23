#include<stdio.h>
#include<assert.h>

unsigned char sum(unsigned char x) {
	int ret = 0;
	
	// 1. Note a different meaning of --unwind for recursion
	//    compared to --unwind for iteration
	// 2. --unwinding-assertions does NOT work for resurcion
	//    since recursion does not have a termination 
	//    condition necessary for --unwingind-assertions

	// cbmc --unwind 8  does NOT report the violation
	// cbmc --unwind 9  does NOT report the violation
	// cbmc --unwind 10 does     report the violation

	// cbmc --unwind 1 --unwinding-assertions does 
	// NOT report the violation, NOR unwinding violation

	if (x==0) ret = 0;  
	else { ret = x+sum(x-1);}

	return ret;
}

int main() {
	printf("sum(10)=%d\n",sum(10));

	assert(0);


	// Note that cbmc automatically unwinds recursion properly 
	// even w/o --unwind <N> for this simple recusion example
	// of sum(10). 
}
