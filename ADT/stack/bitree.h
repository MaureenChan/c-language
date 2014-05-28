#include <stdio.h>
#include <stdlib.h>

#ifndef BITREE_H
#define BITREE_H

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1

typedef int Status;
typedef char TElemType;

//二叉树的二叉链表存储表示
typedef struct BiTNode
{
    TElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;
#endif

Status InitBiTree(BiTree &T);

void DestroyBiTree(BiTree &T);

void CreateBiTree(BiTree &T);

Status ClearBiTree(BiTree &T);

Status BiTreeEmpty(BiTree &T);

int BiTreeDepth(BiTree &T);

Status Root(BiTree &T);

TElemType Value (BiTree &T, BiTree &e);

Status Assign(BiTree &T, BiTree &e, TElemType value);

BiTree Parent (BiTree &T, BiTree &e);

BiTree LeftChild(BiTree &T,BiTree &e);

BiTree RightChild(BiTree &T, BiTree &e);

BiTree LeftSibling(BiTree &T,BiTree &e);

BiTree RightSibling(BiTree &T,BiTree &e);

Status DeleteChild(BiTree &T, BiTree &p, int LR);

void PreOrderTraverse(BiTree &T);

void InOrderTraverse(BiTree &T);

void PostOrderTraverse(BiTree &T);

void LevelOrderTraverse(BiTree &T);




