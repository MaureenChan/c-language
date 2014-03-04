#include <stdio.h>
#include <time.h>

void play(int n)
{
    int i, m = 0, t = 0;
    for (i = 0; i < n; i++)
    {
	t = rand() % 6 + 1;
	m += t;
	printf("\t No%d:%d;\n", i + 1, t);
    }
    printf("\t total point:%d\n", m);
}
int main()
{
    int c;
    int n;
    int i, m;
    do{
	srand(time(NULL));
	printf("set ball number:");
	scanf("%d", &n);
	if (n == 0)
	    break;
	printf("\nset participant number:");
	scanf("%d", &c);
	if (c == 0)
	    break;
	for (i = 0;i < c;i++)
	{
	    printf("\nNo%d number:\n", i+1);
	    play(n);
	}
	printf("\n");
    }while(1);
    return 0;
}
