#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
#include <malloc.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <math.h>
#include <process.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1

typedef int Status;
typedef char SElemType;

typedef struct{
    SElemType *base;
    SElemType *top;
    int stacksize;
}SqStack;

Status InitStack(SqStack *S);
Status DestroyStack (SqStack *S);
Status ClearStack (SqStack *S);
Status StackEmpty(SqStack S);
int StackLength(SqStack S);
Status GetTop (SqStack S, SElemType *e);
Status Push(SqStack *S, SElemType e);
Status Pop(SqStack *S, SElemType *e);
Status StackTraverse(SqStack S, Status (* visit)());
