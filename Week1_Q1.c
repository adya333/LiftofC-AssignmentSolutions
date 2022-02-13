#include<stdio.h>
int main()
{
    char name [50];
    int red ;
    char branch[50];
    char hobbies[50];
    printf("enter the info\n");
    gets(name);
    scanf("%d", &red);
    gets(branch);
    gets(hobbies);
    puts(name);
    printf("%d\n",red);
    puts(branch);
    puts(hobbies);
    return 0;

}
