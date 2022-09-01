#include <stdio.h>

int main()
{

    int marks[10];

    int array_size = sizeof(marks) / sizeof(marks[0]);

    printf("%d", array_size);

    return 0;
}