#include<stdio.h>
void greet(char name[60],char roll[100])
{
    printf("\n HELLO %s",name);
    printf("\n WELCOME TO THE COMPANY AS A %s",roll);
}
int main()
{
  greet("TAMIL","PROJECT MANAGER");
  return 0;
}