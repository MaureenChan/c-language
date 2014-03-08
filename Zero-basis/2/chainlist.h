#include <stdlib.h>
typedef struct Node{
    DATA data;
    struct Node *next;
}ChainListType;

ChainListType *ChainListAddEnd(ChainListType *head, DATA data);
ChainListType *ChainListAddFirst(ChainListType *head, DATA data);
ChainListType *ChainListFind(ChainListType *head, char *key);
ChainListType *ChainListInsert(ChainListType *head, char *findkey, DATA data);
int ChainListDelete(ChainListType *head, char *key);
int ChainListLength(ChainListType *head);
