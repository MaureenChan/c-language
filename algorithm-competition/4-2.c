//判断一个事物是否具有某一性质  的函数---谓词
//原本我的思路是从一开始算起。由于是求最大的。从后面算起好像好一点，哈哈哈哈
#include <stdio.h>
/*do not use this if x is very large or small*/
int is_prime(int x)
{
    int i;
    for(i=2;i*i<=x;i++)
        if(x%i==0)
            return 0;
    return 1;
}

int main()
{
    int i,m;
    scanf("%d",&m);
    for(i=m-2;i>=3;i--)
        if(is_prime(i)&&is_prime(i+2))
        {
            printf("%d %d\n",i,i+2);
            break;
        }
    return 0;
}
