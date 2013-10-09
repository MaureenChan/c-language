#include <stdio.h>
int main()
{
    int a[10];
    int height,i,count=0;
    //input
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&height);
    printf("%d\n",height);
    for (i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for (i=0;i<10;i++)
    {
        if(height+30>=a[i])
            count++;
    }
    printf("%d\n",count);
    return 0;
}
