#include <stdio.h>
int main()
{
    //getline;
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
	if (c == '\n')
	    ++nl;
    }
    printf("%d\n", nl);
    return 0;

    /*getchar*/
    /*double nc;*/
    /*for (nc = 0; getchar() != EOF; ++nc)*/
	/*;*/
    /*printf("%.0f\n", nc);*/
    /*return 0;*/



    
    /*long nc;*/
    /*nc = 0;*/
    /*while (getchar() != EOF)*/
    /*{*/
	/*++nc;*/
    /*}*/

    /*printf("%ld\n",nc);*/
    /*return 0;*/
}
