#include<stdio.h>
int main()
{
    char name [20];
    char red [3];
    char branch[20];
    char hobbies[20];
    printf("enter the info\n");
    gets(name);
    scanf("%s", &red);
    scanf("%s", &branch);
    scanf("%s", &hobbies);
    printf("%s\n",name);
    printf("%s\n",red);
    printf("%s\n",branch);
    printf("%s\n",hobbies);
    return 0;

}
