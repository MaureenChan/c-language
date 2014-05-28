#include "bitree.h"
#include "queue.c"

int main()
{
    LinkQueue Q;
    char select, e;
    InitQueue(Q);

    printf("Input select:\n");
    scanf("%c",&select);
    while (select != '0')
    {
	EnQueue(Q,select);
	printf("Input select:\n");
	scanf("%c",&select);

    }


    DeQueue(Q, &e);
    printf("%c",e);
    printf("\n");

    GetHead(Q,&e);
    printf("%c",e);
    printf("\n");
    QueueTraverse(Q);

    DestroyQueue(Q);

    if (QueueEmpty(Q))
    {
	printf("Empty!\n");
    }

    else
	printf("Not empty!\n");

    /*while (select != '0')*/
    /*{*/
    /*}*/
    
    /*do*/
    /*{*/
	/*printf("\n__________________\n");*/
	/*printf("1:DestroyQueue(Q)\n");*/
	/*printf("2:EnQueue(Q,e)\n");*/
	/*printf("3:DeQueue(Q,e)\n");*/
	/*printf("4:QueueTraverse(Q)\n");*/
	/*printf("0:Exit\n");*/
	/*printf("+++++++++++++++++++\n");*/
	/*printf("Input e:\n");*/
	/*scanf("%c",&e);*/
	/*printf("Input select:\n");*/
	/*scanf("%c",&select);*/
	/*switch(select)*/
	/*{*/
	    /*case
	     * '1':*/
		/*DestroyQueue(Q);*/
		/*break;*/
	    /*case '2':*/
		/*EnQueue(Q,e);*/
		/*break;*/
	    /*case '3':*/
		/*DeQueue(Q,e);*/
		/*break;*/
	    /*case '4':*/
		/*QueueTraverse(Q);*/
		/*break;*/
	    /*case '0':*/
		/*return 0;*/
		
	/*}*/
    /*}while(select != '0');*/

    

    return 0;
}
