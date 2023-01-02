#include <stdio.h>
#define N 3 
int main(){ // Insertion sort that finds the smallest # first
    unsigned char data[N], i, j, tmp;
    /* Assign random values to the array*/
    for (i=0; i<N; i++){
        data[i] = nondet_int(); 
    }
    /* It misses the last element, i.e., data[N-1]*/
    for (i=0; i<N-1; i++)
       for (j=i+1; j<N-1; j++)          // should be j < N
            if (data[i] > data[j]){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
    /* Check the array is sorted */
    for (i=0; i<N-1; i++){
        assert(data[i] <= data[i+1]);
   }
//        i = data[10];
}
