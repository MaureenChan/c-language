#include <stdio.h>
#define MAXN 64
int a[MAXN+1][MAXN+1]={0};  //a数组里面的元素都为0了

void gamecal(int k,int n) //处理编号k开始的n个选手的日程
{
    int i,j;
    if (n==2)
    {
        a[k][1]=k;  //参赛对手编号
        a[k][2]=k+1;
        a[k+1][1]=k+1;
        a[k+1][2]=k;
    }
    else
    {
         gamecal(k,n/2);
         gamecal(k+n/2,n/2);
         for(i=k;i<k+n/2;i++)
         {
             for(j=n/2+1;j<=n;j++)
             {
                 a[i][j]=a[i+n/2][j-n/2];
             }
         }
         for(i=k+n/2;i<k+n;i++)
         {
             for(j=n/2+1;j<=n;j++)
             {
                 a[i][j]=a[i-n/2][j-n/2];
             }
         }
    }
}
int main()
{
    int m,i,j;
    printf("Input number:");
    scanf("%d",&m);
    j=2;
    for(i=2;i<8;i++)
    {
        j=j*2;
        if(j==m)
            break;
    }
    if(i>=8)
    {
        printf("Not allowed!");
        return 0;
    }

    gamecal(1,m);
    printf("\nNumbers:");
    for(i=2;i<=m;i++)
    {
        printf("day%2d ",i-1);
    }
    printf("\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}
