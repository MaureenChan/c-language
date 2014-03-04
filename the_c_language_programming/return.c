#include <stdio.h>
#include <string.h>
#define SUCCESS 0
#define FAILURE -1

int main(void)
{
    char pass_buff[50] = {0};
    printf("\nEnter the password...");
    fgets(pass_buff,sizeof(pass_buff)-1,stdin);
    pass_buff[strlen(pass_buff)-1] = '\0';
    if(!(strcmp(pass_buff,"Linux")))
    {
	printf("\n Passwords Match..SUCCESS\n");
	return SUCCESS;
    }
    else
    {
	printf("\n Passwords do not match...FAILURE\n");
	return FAILURE;
    }
}
