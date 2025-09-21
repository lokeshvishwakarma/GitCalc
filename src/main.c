#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);

int main(void)
{
    double x = 10;
    double y = 20;
    printf("The addition of numbers %f and %f is %f\n", x, y, add(x,y));
    printf("The subtraction of numbers %f and %f is %f\n", x, y, subtract(x,y));
    
    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}