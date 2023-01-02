// cbmc hanoi3.c –unwind 7 
// Increase n from 1 in –unwind [n] to find the shortest solution
signed char disk[3][3] = {{3,2,1},{0,0,0},{0,0,0}};

// The position where the top disk is located at.
// If the pole has no disk, top is -1
char top[3]={2,-1,-1};

int main() {
  	unsigned char dest, src;

    while(1) {
    src = non_det();
    __CPROVER_assume(src==0 || src==1 || src==2);
    __CPROVER_assume(top[src] != -1);

	dest= non_det();
	__CPROVER_assume((dest==0||dest==1||dest==2) && (dest!= src));
	__CPROVER_assume(top[dest]==-1 || 
                    (disk[src][top[src]] < disk[dest][top[dest]]));

	top[dest]++;
    disk[dest][top[dest]]=disk[src][top[src]];

	disk[src][top[src]]=0;
	top[src]--;

	// Check if the final state (i.e., all disks are moved to the 
	// pole 2) is reached or not
	assert( !(disk[2][0]==3 && disk[2][1]==2 && disk[2][2]==1));}  
}
