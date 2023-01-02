#define MAX 5
int main() {
	unsigned char a[MAX]={0,1,2,3,}, b[MAX];
	//memset(
	memcpy(b, a, MAX);
	assert(b[2] == 2);
}
