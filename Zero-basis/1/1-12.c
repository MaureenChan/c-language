#include <stdio.h>
#include <time.h>
int main()
{
    int n, m, i = 0;
    srand(time(NULL));
    n = rand() % 100 + 1;
    do {
	printf("guess:");
	scanf("%d", &m);
	i++;
	if (m > n)
	    printf("Error! Too big!\n");
	else if (m < n)
	    printf("Error! Too small\n");
    }while(m != n);
    
    printf("Bingo!\n");
    printf("You have guessed %d times", i);
    if (i <= 5)
	printf("Too clever!\n");
    else if (i > 5)
	printf("Try again\n");

    return 0;
}
