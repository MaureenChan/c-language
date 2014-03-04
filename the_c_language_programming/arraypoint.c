#include <stdio.h>

int strlength(char s[])
{
    int n;
    for (n = 0; *s != '\0'; s++)
    {
	n++;
    }
    return n;
}

void strcpyarray(char *s, char *t)
{
    int i = 0, j = 0;
    while((s[j++] = t[i++]))
	;
}

void strcpypoint(char *s, char *t)
{
    while((*s++ = *t++))    //The compiler is warning you that you should surround assignments within parentheses when it is within a conditional to avoid the ol' assignment-when-you-mean-comparison mistake.
	;
}

int main()
{
    char a[20] = "goodmorning";
    char *s = "helloworld";
    char b[20] = "";
    char c[20] = "";

    strcpyarray(b,a);
    strcpypoint(c,s);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%p\n", s);
    printf("%s\n", s);
    s++;
    printf("%s\n", s);
    printf("The length is %d\n", strlength(s));

    return 0;
}
