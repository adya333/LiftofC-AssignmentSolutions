#include<stdio.h>
int main()
{
    char name [50];
    int red ;
    char branch[50];
    char hobbies[50];
    //Tking inputs
    printf("Enter name:");
    gets(name);
    
    printf("Enter branch:");
    gets(branch);
    
    printf("Enter hobbies");
    gets(hobbies);
    
    printf("Enter registration no.");
    scanf("%d",&red);
    
    //Printing all details
    printf("\nNAME:");
    puts(name);
    printf("BRANCH:");
    puts(branch);
    printf("HOBBIES:");
    puts(hobbies);
    printf("REGISTRATION NUMBER:%d",red);
    
    return 0;

}

