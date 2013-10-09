#include <stdio.h>
int main()
{
    int month[12];
    int i,rest=300,mother;
    for (i=0;i<12;i++)
    {
        scanf("%d",&month[i]);
    }

    for (i=0;i<12;i++)
    {
        rest=rest-month[i];  //除掉花销剩余的钱
        if (rest<0)          //出现不够预算的情况
        {
            printf("- %d",i);
            return 0;
        }
        mother+=rest/100;    //
    }

    for (i=0;i<12;i++)
    {
        printf("%d ",month[i]);
    }
    printf("\n");
    return 0;
}
