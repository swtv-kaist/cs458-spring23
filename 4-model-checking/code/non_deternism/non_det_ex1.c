#define N 4

void f(unsigned char *, int);

int main(){
	unsigned char a[N], i;

	// Note that a[i] will have a non-deterministic value 
    // which enables a target program to explore 
    // all possible execution paths (e.g., a[1] = 7 at L16)
	for(i=0; i < N; i++) a[i]= non_det();
	f(a, N);
}

void f(unsigned char *a, int len) {
	if (a[1] == 7 && a[3]==a[1]-5) {
		assert(0);
	}
}
