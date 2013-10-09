#include <stdio.h>
#define MAX 100+10
int main()
{
    long int l;
    int s,t,m,i,c;
    int count=0;
    int stone[MAX];
    int step=0;
    //input
    scanf("%ld",&l);
    scanf("%d%d%d",&s,&t,&m) ;

    //procedure

    for (i=0;i<m;i++)
    {
        scanf("%d",&c);
        stone[i]=c;
    }
loop:while (step != l && step <=l)
    {
        for (j=0;j<m;j++)
        {

            for (i=t;i>=s;i--)
            {
                if(stone[j]<step+i)
                {
                    step+=i;
                    printf("I am here:%d\n",step);
                    goto loop;
                }
            }

            step+=t;
            count++;
            printf("count:%d\n",count);
        }
    }
    //output
    printf("final count:%d\n",count);
    printf("\n");
    return 0;
}
