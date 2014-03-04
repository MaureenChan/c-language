#include <stdio.h>
#define NUM 13
int main(){
    int fib[NUM]={1,1};
    int i;
    for (i=2;i<NUM;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("number %d:\n", fib[i]);
    }
    return 0;
}

