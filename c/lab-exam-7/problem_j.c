#include <stdio.h>
#include <string.h>

int main()
{

    char my_string[100];

    scanf("%s", my_string);

    if (my_string[0] >= 'a' && my_string[0] <= 'z' && my_string[1] >= 'a' && my_string[1] <= 'z')
    {
        printf("%s", my_string);
        return 0;
    }

    int check = 1;

    for (int i = 1; i < strlen(my_string); i++)
    {
        if (my_string[i] >= 'a' && my_string[i] <= 'z')
        {
            check = 0;
            break;
        }
    }

    /*   if (all_large)
      {

          for (int i = 0; i < strlen(my_string); i++)
          {
              printf("%c", my_string[i] + 32);
          }

          return 0;
      }

      for (int i = 0; i < strlen(my_string); i++)
      {
          output[i] = my_string[i];

          // make fist character capital
          if (my_string[0] >= 'a' && my_string[0] <= 'z')
          {
              output[0] = my_string[0] - 32;
          }

          if (my_string[i] >= 65 && my_string[i] <= 90 && i != 0)
          {
              output[i] = my_string[i] + 32;
          }
      } */

    if (check)
    {
        if (my_string[0] >= 'A' && my_string[0] <= 'Z')
        {
            my_string[0] = my_string[0] + 32;
        }
        else
        {
            my_string[0] = my_string[0] - 32;
        }

        for (int i = 1; i < strlen(my_string); i++)
        {
            my_string[i] = my_string[i] + 32;
        }
    }

    printf("%s", my_string);

    return 0;
}