#include <stdio.h>
int main(){
    int oldprice, price=0,i=0;
    printf("Enter the oldprice:");
    scanf("%d",&oldprice);
    system("clear");
    printf("Enter the guess price:");
    while(oldprice!=price){
        i++;
        printf("Guesser:\n");
        scanf("%d",&price);
        printf("host:\n");
        if(price>oldprice){
            printf("higher\n");
        }
        else if (price<oldprice){
            printf("lower\n");
        }
        else{
            printf("Bingo!\n");
        }
    }
    return 0;
}

