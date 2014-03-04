#include <stdio.h>
#define N 1000+10
int main()
{
    int i=0,c, temp;
    int a[N];
    float t[N];
    /*
     *while ((c=getchar())!=EOF)
     *{
     *    if (c=' ')
     *        continue;
     *    a[i]=c;
     *    i++;
     *}
     *a[i]='\0';
     */
    for (i = 0;;i++) {
        scanf("%d", &temp);
        if (temp != '\n')
            a[i] = temp;
        else 
            break;

    }

    for (i=0;a[i]!='\0';i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

