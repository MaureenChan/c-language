typedef struct
{
    char key[15];
    char addr[20];
    char telephone[15];
    char mobile[12];
}DATA;

#include <stdio.h>
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
	printf("Name:%s\n", data.key);
	printf("Address:%s\n", data.addr);
	printf("Phone:%s\n", data.telephone);
	printf("Moblie:%s\n", data.mobile);
	h = h->next;
    }
    return ;
}

ChainListType *input(ChainListType *head)
{
    DATA data;
    printf("Please input information:\n");
    printf("Name:\n");
    scanf("%s", data.key);
    printf("Address:\n");
    scanf("%s", data.addr);
    printf("Phone:\n");
    scanf("%s", data.telephone);
    printf("Moblie:\n");
    scanf("%s", data.mobile);
    return ChainListAddFirst(head,data);

}

void find(ChainListType *head)
{
    ChainListType *h;
    DATA data;
    char name[15];
    printf("Please input the name you want to find\n");
    scanf("%s", name);
    h = ChainListFind(head, name);
    if(h)
    {
	data = h->data;
	printf("Name:%s\n", data.key);
	printf("Address:%s\n", data.addr);
	printf("Phone:%s\n", data.telephone);
	printf("Moblie:%s\n", data.mobile);
    }

}

void delete(ChainListType *head)
{
    ChainListType *h = head;
    char name[15];
    printf("Please input the name you want to delete");
    scanf("%s", name);
    ChainListDelete(head, name);
}

int main()
{
    ChainListType *head = NULL;
    int select;
    do{
	printf("\n_________________________\n");
	printf("1.Add Contact\n");
	printf("2.Find Contact\n");
	printf("3.Delete Contact\n");
	printf("4.List All Contact\n");
	printf("0.Exit\n");
	printf("\n_________________________\n");
	select = getchar();
	switch(select)
	{
	    case '1':
		printf("\nAdd Contact\n");
		head = input(head);
		break;
	    case '2':
		printf("\nFind Contact\n");
		find(head);
		break;
	    case '3':
		printf("\nDelete Contact\n");
		delete(head);
		break;
	    case '4':
		printf("List All Contact\n");
		ChainListAll(head);
		break;
	    case '0':
		return 0;
	}
    }while(select != '0');
}
