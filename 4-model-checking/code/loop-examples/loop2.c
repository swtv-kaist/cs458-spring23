#define N 3
int main() {
	int sum=0, i=0;
	for(i=0; i < N; i ++ ) {
		sum+=i;
	}
	// sum = 0 + 1 + 2;
	assert(sum==4);// cbmc --unwind 3 does NOT report the violation
	               // cbmc --unwind 4 does     report the violation
		       // cbmc --unwindset main.0:4 report the violation
}
