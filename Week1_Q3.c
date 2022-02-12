#include<stdio.h>
int main()
{   int n;int var;
    printf("enter the number\n");   
    scanf("%d",&var);
     n=var%2;
    switch(n)
    {
        case 0:
         printf("the number is even\n");
         break;        
        default:
         printf("the number is odd\n");
         break;
    }

}
