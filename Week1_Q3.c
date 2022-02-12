#include<stdio.h>
int main()
{   printf("enter the number\n");
    int var;
    scanf("%d",&var);
    int n=var%2;
    switch(n)
    {
        case 0:
         printf("\neven\n");
         break;
        default:
         printf("\nodd\n");
         break;
    }

}
