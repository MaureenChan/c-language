#include "bitree.h"
#include "queue.h"
#include "queue.c"
#include "bitree.c"
int main()
{
    TElemType e;
    BiTree T;
    InitBiTree(&T);

    // Test BiTreeEmpty;
    printf("\nEmpty or not:");
    if (BiTreeEmpty(T))
	printf("Empty\n");
    else
	printf("Not empty\n");

    // Test CreateBiTree;
    CreateBiTree(&T);

    // Test BiTreeDepth;
    printf("Depth:%d\n",BiTreeDepth(T));

    // Test Root;
    printf("\n Get Root:");
    if (Root(T))
	Visit(Root(T)->data);

    // Test Value;
    printf("\n Get Value:");
    Visit(Value(T, T->lchild));

    // Test Assign;
    printf("\nAssign:");
    Assign(T,&T->lchild,50);

    //Test Parent;
    printf("\nParent->data:");
    Visit(Parent(T, T->rchild)->data);
    
    // Test LeftChild;
    printf("\nLeftChild:");
    Visit(LeftChild(T,T)->data);

    // Test RightChild;
    printf("\nRightChild:");
    Visit(RightChild(T,T)->data);

    // Test LeftSibling;
    printf("\nLeftSibling:");
    Visit(LeftSibling(T, T->rchild)->data);

    // Test RightSibling;
    printf("\nRightSibling:");
    Visit(RightSibling(T, T->lchild)->data);

    printf("\n");
    printf("\n");
    printf("\n");

    // Test PreOrderTraverse;
    PreOrderTraverse(T,Visit);

    // Test InOrderTraverse;
    printf("\n");
    InOrderTraverse(T,Visit);

    // Test PostOrderTraverse;
    printf("\n");
    PostOrderTraverse(T,Visit);

    // Test LevelOrderTraverse;
    printf("\n");
    LevelOrderTraverse(T,Visit);
    printf("\n");

    // Test DestroyBiTree;
    DestroyBiTree(&T);

    if (BiTreeEmpty(T))
	printf("Empty\n");
    else
	printf("Not empty\n");

    return 0;
}
