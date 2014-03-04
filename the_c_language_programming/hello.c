#include <stdio.h>
#include <string.h>

void setline(char s[])
{
    strcpy(s,"helloworld");//s[n] = "helloworld"   would be wrong...
    printf("In function:%s\n", s);
}
int main()
{
    int fahr,celsius;
    char s[50] = "goodmorning";		   
    /*printf("helloworld!\n");*/
    /*printf("hello, ");*/
    /*printf("world");*/
    /*printf("\n");*/
    
    /*fahr = 0;*/
    /*while (fahr <=300)*/
    /*{*/
	/*celsius = 5 * (fahr - 35) / 9;*/
	/*printf("%d\t%d\n", fahr, celsius);*/
	/*fahr = fahr + 50;*/
    /*}*/

    setline(s, 50);
    printf("%s\n",s);


    return 0;
}
