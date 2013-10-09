#include <stdio.h>

#define N 50

long int calculate(exam_score,class_score,a,b,paper){
    long int money=0;
    if (exam_score>80 && paper>=1)
       money+=8000;
    if (exam_score>85 && class_score>80)
       money+=4000;
    if (exam_score>90)
       money+=2000;
    if (exam_score>85 && b == 'Y')
       money+=1000;
    if (class_score>80 && a == 'Y')
       money+=850;
   return money;
}
int main(){
   char name[N],max_name[N];
   int exam_score,class_score,paper;
   char a,b;
   int n,i,j;
   long int money,sum=0,max=-1;
   scanf("%d",&n);
   for (i=0;i<n;i++){
       scanf("%s",name);
       scanf("%d %d %c %c %d",&exam_score,&class_score,&a,&b,&paper);
       money=calculate(exam_score,class_score,a,b,paper);
       if (max < money){
           max = money;
           for (j=0;j<N;j++)
               max_name[j]=name[j];
       }
       sum+=money;
   }

   printf("%s\n",max_name);
   printf("%ld\n%ld\n",max,sum);
   return 0;
} 
