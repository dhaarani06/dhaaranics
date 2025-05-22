#include <stdio.h>
int find_largest(int a, int b, int c)
{
    if (a >= b) {
        if (a >= c)
            return a;
        else
            return c;
    }
    else {
        if (b >= c)
            return b;
        else
            return c;
    }
}
int main()
{
    int a = 9, b = 22, c = 10;
    int largest = find_largest(a, b, c);
    printf("%d is the largest number.\n", largest);
     return 0;
}
