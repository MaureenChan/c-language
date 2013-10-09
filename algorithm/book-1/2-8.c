#define LOCAL                   //如果比赛要求读写标准输入输出，只需在提交之前删除这行即可
#include <stdio.h>
#define INF 1000000000
int main()
{
#ifdef LOCAL                        //只有定义了符号LOCAL，才编译两条freopen语句
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    int x,n=0,min=INF,max=-INF,s=0;         //min初值应该是一个很大的数。max初值是一个很小的数
    while(scanf("%d",&x)==1)
    {
        s+=x;
        if(x<min)
            min=x;
        if(x>max)
            max=x;
        /*
         * printf("x=%d,min=%d,max=%d\n",x,min,max);    //发现bug时可以用来调试
         */
    }
    n++;
    printf("%d %d %.3lf\n",min,max,(double)s/n);
    return 0;
}
