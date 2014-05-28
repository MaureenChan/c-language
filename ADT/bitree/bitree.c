Status Visit(TElemType e)
{
    printf("%4d ",e);
    if(e == 0)
	return ERROR;
    return OK;
}


Status InitBiTree(BiTree *T)
{
    *T = NULL;
    return OK;
}


void DestroyBiTree(BiTree *T)
{
    if (T)
    {
	if ((*T)->lchild)
	    DestroyBiTree(&(*T)->lchild);
	if ((*T)->rchild)
	    DestroyBiTree(&(*T)->rchild);
	free(*T);
	*T = NULL;
    }
    else
	return ;
}


Status CreateBiTree(BiTree *T)
{
    int e;
    scanf("%d",&e);
    if(e == 0)
	*T = NULL;
    else
    {
	if(!(*T = (BiTNode *)malloc(sizeof(BiTNode))))
	    exit(OVERFLOW);
	(*T)->data = e;
	CreateBiTree(&(*T)->lchild);
	CreateBiTree(&(*T)->rchild);
    }
    return OK;
}


Status BiTreeEmpty(BiTree T)
{
    if (T == NULL)
	return TRUE;
    else
	return FALSE;
}


int BiTreeDepth(BiTree T)
{
    if (T)
    {
	if (BiTreeDepth(T->lchild) > BiTreeDepth(T->rchild))
	    return BiTreeDepth(T->lchild) + 1;
	else
	    return BiTreeDepth(T->rchild) + 1;
    }
    else
    {
	return 0;
    }
}


BiTree Root(BiTree T)
{
    if (T)
	return T;
    else
	return NULL;
}


TElemType Value(BiTree T, BiTree e)
{
    if (T)
    {
	return e->data;
    }
    else
	return ERROR;

}


Status Assign(BiTree T, BiTree *e, TElemType value)
{
    if (T)
    {
	(*e)->data = value;
	return OK;
    }
    else
	return ERROR;
}


BiTree Parent(BiTree T, BiTree e)
{
    LinkQueue(Q);
    Q = (LinkQueue)malloc(sizeof(Queue));
    InitQueue(Q);
    BiTree p;
    p = T;
    EnQueue(Q,p);
    while (!QueueEmpty(Q))
    {
	DeQueue(Q,&p);
	if(p->lchild == e || p->rchild == e)
	    return p;
	if (p->lchild)
	    EnQueue(Q,p->lchild);
	if (p->rchild)
	    EnQueue(Q,p->rchild);
    }

    return NULL;

}


BiTree LeftChild(BiTree T, BiTree e)
{
    if (T)
    {
	if (e->lchild)
	    return e->lchild;
    }

    return NULL;
}


BiTree RightChild(BiTree T, BiTree e)
{
    if (T)
    {
	if (e->rchild)
	    return e->rchild;
    }
    return NULL;
}


BiTree LeftSibling(BiTree T, BiTree e)
{
    BiTree p;
    p = Parent(T,e);
    if (p->lchild == e)
	return NULL;
    else if (p->lchild)
	return p->lchild;
    return NULL;
}


BiTree RightSibling(BiTree T, BiTree e)
{
    BiTree p;
    p = Parent(T, e);
    if (p->rchild == e)
	return NULL;
    else if (p->rchild)
	return p->rchild;
    return NULL;
}


Status InsertChild(BiTree T, BiTree p, int LR, BiTree c)
{
    if (!T || !p || !c)
	return FALSE;

    if (c->rchild)
	return FALSE;

    if (LR == 0)
    {
	if (p->lchild)
	    c->rchild = p->lchild;

	p->lchild = c;
	return TRUE;
    }

    if (LR == 1)
    {
	if (p->rchild)
	    c->rchild = p->rchild;

	p->rchild = c;
	return TRUE;
    }
    return FALSE;

}


Status DeleteChild(BiTree T, BiTree p, int LR)
{
    if (!T || !p)
	return FALSE;

    if (LR == 0)
    {
	DestroyBiTree(&p->lchild);
	return TRUE;
    }

    if (LR == 1)
    {
	DestroyBiTree(&p->rchild);
	return TRUE;
    }

    return FALSE;
}


void PreOrderTraverse(BiTree T,Status(*Visit)(TElemType e))
{
    if (T == NULL)
	return ;
    Visit(T->data);
    PreOrderTraverse(T->lchild,Visit);
    PreOrderTraverse(T->rchild,Visit);
}



void InOrderTraverse(BiTree T,Status(*Visit)(TElemType e))
{
    if (T == NULL)
	return ;
    InOrderTraverse(T->lchild,Visit);
    Visit(T->data);
    InOrderTraverse(T->rchild,Visit);
}


void PostOrderTraverse(BiTree T, Status(*Visit)(TElemType e))
{
    if (T == NULL)
	return ;
    PostOrderTraverse(T->lchild,Visit);
    PostOrderTraverse(T->rchild,Visit);
    Visit(T->data);
}


void LevelOrderTraverse(BiTree T, Status(*Visit)(TElemType e))
{
    LinkQueue Q;
    Q = (LinkQueue)malloc(sizeof(Queue));
    BiTree p;
    p = T;
    if (T)
    {
	InitQueue(Q);
	EnQueue(Q,p);
	while(!QueueEmpty(Q))
	{
	    DeQueue(Q,&p);
	    Visit(p->data);
	    if(p->lchild)
		EnQueue(Q,p->lchild);
	    if(p->rchild)
		EnQueue(Q,p->rchild);
	}
    }
}
