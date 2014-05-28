#ifndef BITREE_H
#define BITREE_H

#include <stdio.h>
#include <stdlib.h>


#define OVERFLOW -2
#define INFEASIBLE -1
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode, *BiTree;


Status Visit(TElemType e);

Status InitBiTree(BiTree *T);

void DestroyBiTree(BiTree *T);

Status CreateBiTree(BiTree *T);

Status BiTreeEmpty(BiTree T);

int BiTreeDepth(BiTree T);

BiTree Root(BiTree T);

TElemType Value(BiTree T, BiTree e);

Status Assign(BiTree T, BiTree *e, TElemType value);

BiTree Parent(BiTree T, BiTree e);

BiTree LeftChild(BiTree T, BiTree e);

BiTree RightChild(BiTree T, BiTree e);

BiTree LeftSibling(BiTree T, BiTree e);

BiTree RightSibling(BiTree T, BiTree e);

Status InsertChild(BiTree T, BiTree p, int LR, BiTree c);

Status DeleteChild(BiTree T, BiTree p, int LR);

void PreOrderTraverse(BiTree T,Status(*Visit)(TElemType e));

void InOrderTraverse(BiTree T,Status(*Visit)(TElemType e));

void PostOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

void LevelOrderTraverse(BiTree T, Status(*Visit)(TElemType e));
    

#endif 

