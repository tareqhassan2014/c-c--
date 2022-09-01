#include <stdio.h>

int main()
{

    printf("Enter your name: ");

    char name[5];

    /*
    scanf("%s", name);
    scanf() can input a Token.
    if user input extra char program get runtime error.
    to overcome this problem we can use gets()
    */

    /*
    gets(name);
    if user input extra character gets() crush the application.
    to avoid this problem we can use fgets().
    */

    fgets(name, 5, stdin);

    printf("%s", name);

    return 0;
}