//写完了一个程序别忘了测试。
#include <stdio.h>
long int f(int n)  //数据溢出，应为long int非int
{
    long int i,m=1;
    for (i=1;i<=n;i++)
        m*=i;
    return m;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%ld\n",f(n)/(f(m)*f(n-m)));
    return 0;
}
