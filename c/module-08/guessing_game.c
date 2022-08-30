#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    srand(time(0));

    int original_number = rand() % 100 + 1;

    int user_input = 0, try = 0;
    printf("Guess a number : ");

    // using do while loop

    do
    {
        scanf("%d", &user_input);
        try++;

        if (original_number > user_input)
        {
            printf("your number is small. Guess a large number: ");
        }
        else if (original_number < user_input)
        {
            printf("your number is Large. Guess a small number: ");
        }

    } while (original_number != user_input && try < 10);

    // using while loop

    // while (original_number != user_input)
    // {
    //     scanf("%d", &user_input);
    //     try++;

    //     if (original_number > user_input)
    //     {
    //         printf("your number is small. Guess a large number: ");
    //     }
    //     else if (original_number < user_input)
    //     {
    //         printf("your number is Large. Guess a small number: ");
    //     }
    // }

    printf("You have tried %d Original number = %d", try, original_number);

    return 0;
}