#include <stdio.h>

float add(float a, float b);

int main(void)
{
    double x = 10.0f;
    double y = 20.0f;
    printf("The addition of numbers %f and %f is %f", x, y, add(x,y));
    return 0;
}

float add(float a, float b)
{
    return a + b;
}