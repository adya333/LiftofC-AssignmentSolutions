#include<stdio.h>
int main()
{   
    int no1,no2;
    printf("enter the two nos:\n");
    scanf("%d  %d",& no1,& no2);
    if(no1>no2)
    {
       printf("%d is maximum",no1);
    }
    else if(no1==no2)
    {
        printf("equal numbers.");
    }
     else
     {
       printf("%d is maximum",no2);
    }
    return 0;
}
