#include <stdio.h>
#include <stdlib.h>
#include "queue.c"
#include "bitree.h"
#include "bitree.c"
void print()
{
    printf("1.Assign(T,e,value)\n");
    printf("2.InsertChild(T,p,LR,c\n");

}
int main()
{
    TElemType  e;
    char select;

    BiTree  T ;

    InitBiTree(T);

    CreateBiTree(T);

    
    PreOrderTraverse(T);
    InOrderTraverse(T);
    PostOrderTraverse(T);

    /*do{*/
	/*print();*/
	/*select = getchar();*/
	/*switch(select)*/
	/*{*/
	    /*case '1':*/
		/*printf("Enter parameter e");*/
		/*Assign(T);*/
	/*}*/
	
    /*}*/





    return 0;
}
