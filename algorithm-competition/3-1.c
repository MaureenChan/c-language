#include <stdio.h>
#define MAXN 10000000000+10 
int a[MAXN];        //只有放在外面时，数组a才可以开得很大；放在main函数内时，数组稍大就会异常退出
int main()
{
    int i,x,n=0;
    while(scanf("%d",&x)==1)
    {
        a[n++]=x;
    }
    for (i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
