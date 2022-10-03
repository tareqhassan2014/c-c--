#include <stdio.h>

float make_sum(float a, float b)
{
    return a + b;
}

int main()
{

    float a, b;
    scanf("%f %f", &a, &b);

    // Call the function make_sum() and print the result
    printf("%f", make_sum(a, b));

    return 0;
}