#define N 3
int main() {
	int sum=0, i=0;
	for(i=0; i < N; i ++ ) {
		sum+=i;
	}
	assert(0);
	// cbmc --unwind 3 does NOT report the violation (assert(0))
    // cbmc --unwind 4 does     report the violation
    // cbmc --unwindset main.0:4 report the violation

    // cbmc --unwind 3 --unwinding-assertions does 
    // NOT report the violation, but a unwinding violation 

    // cbmc --unwind 4 --unwinding-assertions does 
    // report the violation, but not a unwinding violation 
}
