#include <stdio.h>

void copy(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
	i++;
    }

    while ((s[i++] = t[j++]) != '\0')
    {
	;
    }
}
int main()
{
    char s[100], t[100];
    int i,j;
    printf("Please input a string:\n");
    scanf("%s",s);

    void copy(char s[], char t[]);

    printf("%s\n", t);
    return 0;


}
