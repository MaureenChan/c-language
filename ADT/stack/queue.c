
#include "queue.h"
Status InitQueue(LinkQueue Q)
{
    Q->front = (QueuePtr)malloc(sizeof(QNode));
    Q->rear = Q->front;
    if (!Q->front)
	return FALSE;

    Q->front->next = NULL;
    return OK;
}

Status DestroyQueue(LinkQueue Q)
{
    while (Q->front)
    {
	Q->rear = Q->front->next;
	free(Q->front);
	Q->front = Q->rear;
    }
    return OK;
}

Status QueueEmpty(LinkQueue Q)
{
    if (Q->front == Q->rear)
    {
	printf("yes!\n");
	return OK;
    }
    printf("no!\n");
    return FALSE;
}


Status GetHead(LinkQueue Q, QElemType *e)    // e is a pointer
{
    if (Q->front == Q->rear)
    {
	return FALSE;
    }
    
    *e = Q->front->next->data;

    return OK;
}

Status EnQueue(LinkQueue Q, QElemType e)    
{
    QueuePtr p;
    p = (QueuePtr) malloc (sizeof(QNode));
    if (!p)
	return FALSE;
    p->data = e;
    p->next = NULL;
    Q->rear->next = p;
    Q->rear = p;
    return OK;
}

Status DeQueue (LinkQueue Q, QElemType *e)
{
    QueuePtr p;
    if (Q->front == Q->rear)
	return FALSE;

    p = Q->front->next;
    *e = p->data;
    Q->front->next = p->next;
    if (Q->rear == p)
	Q->rear = Q->front;
    free(p);
    return OK;
    
}


void QueueTraverse(LinkQueue Q)
{
    QueuePtr p;
    p = Q->front;
    while(p != Q->rear)
    {
	p = p->next;
	//printf("data:%d ",p->data);
    }
    printf("\n");
}
