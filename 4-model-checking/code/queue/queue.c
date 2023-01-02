#include<stdio.h>
#include<assert.h>
#define SIZE 12
#define EMPTY 0

// We assume that q[] is // empty if head==tail
unsigned int q[SIZE],head,tail;

void enqueue(unsigned int x) {
    q[tail]=x;
    tail=(++tail)%SIZE;
}

unsigned int dequeue() {
    unsigned int ret;
    ret = q[head];
    q[head]=0;
    head= (++head)%SIZE;
    return ret;}

