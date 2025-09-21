#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;
    printf("The addition of numbers %d and %d is %d", x, y, add(x,y));
    return 0;
}

int add(int a, int b)
{
    return a + b;
}