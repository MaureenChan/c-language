
#define OVERFLOW -2
#define INFEASIBLE -1
#define OK 1
#define ERROR
#define TRUE
#define FALSE

typedef int Status;
typedef int TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode, *BiTree;


Status InitBiTree(BiTree &T);
Status PreOrderTraverse(BiTree T,Status(*Visit)(TElemType e));
Status CreateBiTree(BiTree &T);
Status InOrderTraverse(BiTree T,Status(*Visit)(TElemType e));
Status PostOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

Status Visit(TElemType e);
    

