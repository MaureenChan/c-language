#include <stdio.h>
int main(){
    int a,b,max=0,i,sum;
    int day[7];
    for (i=0;i<7;i++){
        scanf("%d %d",&a,&b);
        day[i]=a+b;
    }
    for (i=1;i<7;i++){
        if (day[max]<day[i]){
            max=i;
    }
    }
    if (day[max]>8)
        printf("%d\n",max+1);
    else 
        printf("%d\n",0);
    return 0;
}
