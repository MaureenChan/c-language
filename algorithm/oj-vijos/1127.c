#include <stdio.h>
int main(){
    int k;
    long int n=1;
    double sn=0;
    scanf("%d",&k);
    while (sn<=k){
        sn+=1/(double)n;
        n++;
    printf("%ld\n",n-1);
    }
    return 0;
}
