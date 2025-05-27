#include<stdio.h>
int main()
{
    char name[4];
    printf("enter fullname:");
    fgets(name,4,stdin);
    printf("%s",name);
}