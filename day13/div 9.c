#include<stdio.h>
int main()
{
    int i;
    for(int i=1; i<=100; i++)
    if(i % 9==0)
    printf("%d\n", i);
    return 0;
}  