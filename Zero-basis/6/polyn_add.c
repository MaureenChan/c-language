#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct polyn
{
    float coef;
    int expn;
    struct polyn *next;
}POLYN, *pPOLYN;

void PolynInput(pPOLYN *p)
{
    int i, min = INR_MIN;
    pPOLYN p1, p2;
    if (!(*p = (POLYN *)malloc(sizeof(POLYN))))
    {
	printf("False!");
	exit();
    }

    (*p)->coef = 0;
    printf("Please input the item number:\n");
    scanf("%d", ((*p)->expn));
    (*p)->next = NULL;

    for (i = 0; i < (*p)->expn; i++)
    {
	if(!(*p = (POLYN *)malloc(sizeof(POLYN))))
	{
	    printf("False!\n");
	    exit();
	}
	printf("No %d coef:", i+1);
	scanf("%f", &(p1->coef));
	do{
	    printf("No %d expn:", i + 1);
	    scanf("%d", &(p1->expn));
	    if (p1->expn < min)
		printf("Error! Input Again!\n");
	}while(p1->expn < min);
	min = p1->expn;
	p1->next = (*p)->next;
	(*p)->next = p1;
    }

    p1 = (*p)->next;
    while (p1)
    {
	p2 = p1->next;
	while (p2 && p2->expn == p1->expn)
	{
	    p1->coef += p2->coef;
	    p1->next = p2->next;
	    free(p2);
	    p2 = p1->next;
	    (*p)->expn--;
	}
	p1 = p1->next;
    }
}


void PolynPrint(pPOLYN p)
{
    pPOLYN p1;
    int i;
    printf("\n\nAll %d item\n", p->expn);
    p1 = p->next;
    i = 1;
    while(p1)
    {
	printf("No %d:coef:%g, expn:%d\n", i++, p1->coef, p1->expn);
	p1 = p1->next;
    }
    printf("\n");
}


void PolynAdd(pPOLYN pa, pPOLYN pb)
{
    pPOLYN pa1, pb1, pc1, p;
    pa1 = pa->next;
    pb1 = pb->next;
    pc1 = pa;
    pc1->next = NULL;
    pa->expn = 0;
    while(pa1 && pb1)
    {
	if(pa1->expn > pb1->expn)
	{
	    pc1->next = pa1;
	    pc1 = pa1;
	    pa1 = pa1->next;
	    pc1->next = NULL;
	}
	else if(pa1->expn < pb1->expn)
	{
	    pc1->next = pb1;
	    pc1 = pb1;
	    pa1 = pa1->next;
	    pc1->next = NULL;
	}
	else
	{
	    pa1->coef += pb1->coef;
	    if (pa1->coef != 0)
	    {
		pc1->next = pa1;
		pc1 = pal;
		pa1 = pa1->next;
		pc1->next = NULL;
		p = pb1;
		pb1 = pb1->next;
		free(p);
	    }
	    else
	    {
		p = pa1;
		pa1 = pa1->next;
		free(pa1);
		p = pb1;
		pb1 = pb1->next;
		free(pb1);
		pa->expn--;
	    }
	}
	pa->expn++;
    }
}
