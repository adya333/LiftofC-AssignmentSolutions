#include<stdio.h>
int main()
{   
    int no1,no2;
    printf("enter the two nos:\n");
    scanf("%d  %d",& no1,& no2);
    if(no1>no2)
    {
       printf("%d",no1);
    }
     else
     {
       printf("%d",no2);
    }
    return 0;
}