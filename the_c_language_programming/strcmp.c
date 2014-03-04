#include <stdio.h>
#define SIZE 20

int strcmparray(char *s, char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
	if (s[i] == '\0')
	    return 0;
    return s[i] - t[i];
}

int strcmppoint(char *s, char *t)
{
    while (*s++ == *t++)
	if (*s == '\0')
	    return 0;
	return *s - *t;
}

int main()
{
    char a[SIZE] = "helloworld";
    char b[SIZE] = "goodmorning";
    printf("array:%d\n", strcmparray(a,b));
    printf("point:%d\n", strcmppoint(a,b));
    return 0;
}
