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
    scanf("%s", &branch);
    scanf("%s", &hobbies);
    puts(name);
    printf("%d\n",red);
    printf("%s\n",branch);
    printf("%s\n",hobbies);
    return 0;

}
