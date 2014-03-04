#include <stdio.h>
#include <string.h>
void convto (char *s,int n,int b)
{
    char bit[]={"0123456789ABCDEF"};
    int len;
    if (n==0)
    {
        strcpy(s,"");
        return;
    }
    convto(s,n/b,b);
    len=strlen(s);
    s[len]=bit[n%b];
    s[len+1]='\0';
}

int main(void)
{
    char s[80];
    int i,base,old;
    printf("Input an initial number:\n");
    scanf("%d",&old);
    printf("Input the base:\n");
    scanf("%d",&base);
    convto(s,old,base);
    printf("%s\n",s);
    return 0;
}
