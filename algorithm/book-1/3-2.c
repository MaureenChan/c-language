#include <stdio.h>
#include <string.h>
#define MAXN 1000+10
int a[MAXN]={0};
int main()
{
    int i,j,n,k,first=1;        //为了避免输出多余空格，设置了一个标志变量first，可以表示当前要输出的变量是否为第一个
    /*memset(a,0,sizeof(a));*/   //可以用memset来把数组清零。需要在string.h定义
    scanf("%d%d",&n,&k);
    /*for (i=0;i<=n;i++)*/
        /*printf("%d",a[i]);*/
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j%i==0)
            {
                a[j]=!a[j];   //不是a[j]!=a[i];也不是a[j]!=a[j];
            }
        }
    }


    for(i=1;i<=n;i++)
    {
        if(a[i])
        {
            if(first)
            {
                first=0;
            }
            else
            {
                printf(" ");
            }
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}
