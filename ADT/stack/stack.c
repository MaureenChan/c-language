#include "stack.h"

Status InitStack(SqStack *S)
{
    S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!S.base)
    {
	printf("Allocate False!");
	return FALSE;
    }

    S.top = S.base;
    stacksize = STACK_INIT_SIZE;
    return OK:
}

Status DestroyStack(SqStack *S)
{

}
