//调用栈，学习使用gdb
#include <stdio.h>
void swap(int a,int b)
{
    int t=a;a=b;b=t;
}

int main()
{
    int a=3,b=4;
    swap(3,4);
    printf("%d %d\n",a,b);
    return 0;
}








//void swap(int *a,int *b)
//{
    //int *t;
    //t=a;
    //a=b;
    //b=t;
//}


//int a=3,b=4;
//int main()
//{
    //swap(&a,&b);
    //printf("%d %d\n",a,b);
    //return 0;


//}
//输出3 4







//void swap(int *a,int *b)
//{
    //int *t;
   //*t=*a;
   //*a=*b;
   //*b=*t;
//}


//int a=3,b=4;
//int main()
//{
    //swap(&a,&b);
    //printf("%d %d\n",a,b);
    //return 0;
//}
//error:segment fault 11
//t一开始需要赋初值

