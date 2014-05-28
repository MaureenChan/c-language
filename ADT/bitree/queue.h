#ifndef QUEUE_H
#define QUEUE_H


typedef BiTree QElemType;

typedef struct QNode{
    QElemType data;
    struct QNode *next;
}QNode, *QueuePtr;
typedef struct {
    QueuePtr front;
    QueuePtr rear;
}*LinkQueue, Queue;

Status InitQueue(LinkQueue Q);

Status DestroyQueue(LinkQueue Q);

Status QueueEmpty(LinkQueue Q);

Status GetHead(LinkQueue Q, QElemType *e);

Status EnQueue(LinkQueue Q, QElemType e);

Status DeQueue (LinkQueue Q, QElemType *e);


#endif


