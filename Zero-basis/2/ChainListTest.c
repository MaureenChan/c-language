#include <stdio.h>
typedef struct{
    char key[15];
    char name[20];
    int age;
}DATA;
#include "chainlist.h"
#include "ChainList.c"
void ChainListAll(ChainListType *head)
{
    ChainListType *h;
    DATA data;
    h = head;
    printf("All data:\n");
    while(h)
    {
	data = h->data;
	printf("(%s,%s,%d)\n",data.key,data.name,data.age);
	h = h->next;
    }
    return ;
}

int main()
{
    ChainListType *node, *head = NULL;
    DATA data;
    char key[15], findkey[15];

    printf("Input data in chainlist, include keyword, name, age, if keyword is 0, then exit:\n");
    do{
	fflush(stdin);
	scanf("%s", data.key);
	if(strcmp(data.key, "0") == 0)
	    break;
	scanf("%s%d", data.name, &data.age);
	head = ChainListAddEnd(head, data);
    }while(1);

    printf("The Chainlist has %d points\n", ChainListLength(head));
    ChainListAll(head);

    printf("\nInsert point, input the place keyword:\n");
    scanf("%s", findkey);
    printf("Input insert data(keyword name age):");
    scanf("%s%s%d", data.key, data.name, &data.age);

    ChainListAll(head);

    printf("\nFind in the chain,input keyword to find");
    fflush(stdin);
    scanf("%s", key);
    node = ChainListFind(head, key);
    if(node)
    {
	data = node->data;
	printf("keyword %s data is (%s, %s, %d)\n", key, data.key, data.name, data.age);
    }else
	printf("Can't not find point about the keyword %s!\n", key);

    printf("\nDelete point in the chain,input keyword to delete:");
    fflush(stdin);
    scanf("%s", key);
    ChainListDelete(head, key);
    ChainListAll(head);
    return 0;

}
