#include <string.h>
ChainListType *ChainListAddEnd(ChainListType *head, DATA data)
{
    ChainListType *node, *h;
    if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
    {
	printf("Can't not get the memory for the point!\n");
	return NULL;
    }

    node->data = data;
    node->next = NULL;
    if (head == NULL)
    {
	head = node;
	return head;
    }
    h = head;
    while(h->next != NULL)
	h = h->next;
    h->next = node;
    return head;
}

ChainListType *ChainListAddFirst(ChainListType *head, DATA data)
{
    ChainListType *node, *h;
    if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
    {
	printf("Can't not get the memory for the point!\n");
	return NULL;
    }
    node->data = data;
    node->next = head;
    head = node;
    return head;
}

ChainListType *ChainListInsert(ChainListType *head, char *findkey, DATA data)
{
    ChainListType *node, *node1;
    if (!(node = (ChainListType *)malloc(sizeof(ChainListType))))
    {
	printf("Can't not get the memory for the point!\n");
	return 0;
    }
    node->data = data;
    node1 = ChainListFind(head, findkey);
    if(node1)
    {
	node->next = node1->next;
	node1->next = node;
    }else{
	free(node);
	printf("Can't not find the place!\n");
    }
    return head;
}

ChainListType *ChainListFind(ChainListType *head, char *key)
{
    ChainListType *h;
    h = head;
    while(h)
    {
	if(strcmp(h->data.key, key) == 0)
	    return h;
	h = h->next;
    }
    return NULL;
}

int ChainListDelete(ChainListType *head, char *key)
{
    ChainListType *node, *h;
    node = h = head;
    while (h)
    {
	if(strcmp(h->data.key, key) == 0)
	{
	    node->next = h->next;
	    free(h);
	    return 1;
	}else{
	    node = h;
	    h = h->next;
	}
    }
    return 0;
}

int ChainListLength(ChainListType *head)
{
    ChainListType *h;
    int i = 0;
    h = head;
    while(h)
    {
	i++;
	h = h->next;
    }
    return i;
}
