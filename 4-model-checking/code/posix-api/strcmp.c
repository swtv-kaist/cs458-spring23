#include<stdio.h>
// must be included for modeling strncpy, etc.
#include<string.h> 

#define MAX  5
int main() {
	char s1[MAX]="abcd",  s2[MAX];
	strncpy(s2, s1, strlen(s1)+1);
	//strncpy(s2, s1, strlen(s1)); // buggy

	assert(!strcmp(s1, s2)); 
	assert(s2[2] == 'c');
}
