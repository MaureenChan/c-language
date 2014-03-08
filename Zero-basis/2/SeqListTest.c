#include <stdio.h>
typedef struct
{
    char key[15];
    char name[20];
    int age;
}DATA;
#include "SeqList.h"
#include "SeqList.c"
void SeqListAll(SeqListType *SL)
{
    int i;
    for (i = 1; i <= SL->ListLen; i++)
	printf("(%s, %s, %d)\n", SL->ListData[i].key, SL->ListData[i].name, SL->ListData[i].age);
}

int main()
{
    int i;
    SeqListType SL;
    DATA data, *data1;
    char key[15];

    SeqListInit(&SL);

    do{
	printf("Input a point(number name age):");
	fflush(stdin);
	scanf("%s%s%d", data.key, data.name, &data.age);
	if (data.age)
	{
	    if(!SeqListAdd(&SL, data))
		break;
	}
	else
	    break;
    }while(1);

    printf("\nPoints in the List:\n");
    SeqListAll(&SL);
    fflush(stdin);
    printf("\nNumber you want to find:");
    scanf("%d", &i);
    data1 = SeqListFindByNum(&SL, i);

    if(data1)
	printf("No %d point is:(%s, %s, %d)\n", i, data1->key, data1->name, data1->age);

    fflush(stdin);
    printf("\nNumber you want to find:");
    scanf("%s", key);
    i = SeqListFindByCont(&SL, key);
    data1 = SeqListFindByNum(&SL, i);

    if (data1)
	printf("No %d point is: (%s, %s, %d)\n", i, data1->key, data1->name, data1->age);
    return 0;
}
