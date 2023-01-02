#include <stdio.h>
#define N 3

char bin_search(char a[], char size, char x) {
  char low=0;
  char high=size; // a buggy line that causes a buffer overflow
  //char high=size-1; // correct
  
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    char mid = low + (high - low) / 2;

    if (a[mid] == x) return mid;

    if (a[mid] < x)  low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}


int main() {
  char a[N],i, key, result;
  for(i=0; i <N; i++) { 
    a[i] = non_det();   
    __CPROVER_assume(i==0 || a[i-1]<a[i]);
  }

   key = non_det();
   result = bin_search(a,N,key);

   if(result!= -1) {
     assert(a[result] == key);
   } else {
     for (i=0; i < N; i++)
        assert(a[i]!=key);
   }  
}
