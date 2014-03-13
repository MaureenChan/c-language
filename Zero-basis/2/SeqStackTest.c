#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
typedef struct
{
    char name[15];
    int age;
}DATA;
#include "SeqStack.h"

int main()
{
    SeqStack *stack;
    DATA data, data1;
    stack = SeqStackInit();
    printf("Push:\n");
    printf("Input Name Age:\n");
    scanf("%s%d", data.name, &data.age);
    SeqStackPush(stack, data);
    printf("Input Name Age:\n");
    scanf("%s%d", data.name, &data.age);
    SeqStackPush(stack, data);
    printf("Pop:\n");
    data1 = SeqStackPop(stack);
    printf("pop data(%s, %d)\n", data1.name, data1.age);
    data1 = SeqStackPop(stack);
    printf("pop data(%s, %d)\n", data1.name, data1.age);
    SeqStackFree(stack);
    return 0;
}
