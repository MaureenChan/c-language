#include "bitree.h"

Status InitBiTree(BiTree &T)
{
    T = NULL;
    return OK;
}


void DestroyBiTree(BiTree &T)
{
    if (T != NULL)
    {
	DestroyBiTree(T->lchild);
	DestroyBiTree(T->rchild);
	free(T);
	T = NULL;
    }
    return ;
}

void CreateBiTree(BiTree &T)
{
    TElemType ch;
    ch = getchar();
    if(ch == '#')
	*T = NULL;
    else
    {
	*T = (BiTree)malloc(sizeof(BiTNode));
	if(!*T)
	    exit(OVERFLOW);
	T->data = ch;
	CreateBiTree(T->lchild);
	CreateBiTree(T->rchild);
    }
}


Status Assign(BiTree T,BiTree e, TElemType value)
{
    if (!T && !e)
	return FALSE;

    e->data = value;
    return OK;
}

Status InsertChild(BiTree &T,BiTree &p, int LR,BiTree c)
{
    BiTree *position;
    if (!T && !p && c->rchild != NULL)
	return FALSE;

    if (LR == 0)
    {
	if (p->lchild != NULL)
	{
	    c->rchild = p->lchild;
	}
	position = &p->lchild;
    }

    else
    {
	if (p->rchild != NULL)
	{
	    c->rchild = p->rchild;
	}
	position = &p->rchild;
    }

    *position = c; 
    return OK;
}


void PreOrderTraverse(BiTree &T)
{
    if (T == NULL)
	return ;
    printf("%c ", T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
}

void InOrderTraverse(BiTree &T)
{
    if(T == NULL)
	return ;
    InOrderTraverse(T->lchild);
    printf("%c ", T->data);
    InOrderTraverse(T->rchild);
}

void PostOrderTraverse(BiTree &T)
{
    if (T == NULL)
	return ;
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    printf("%c ", T->data);
}

