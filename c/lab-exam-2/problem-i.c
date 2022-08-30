#include <stdio.h>

int main()
{

    int Newbie = 40, Pupil = 70, Specialist = 90, Expert = 90, input = 0;

    scanf("%d", &input);

    if (0 <= input && input < Newbie)
    {
        printf("%d", Newbie - input);
    }

    else if (Newbie <= input && input < Pupil)
    {
        printf("%d", Pupil - input);
    }

    else if (Pupil <= input && input < Specialist)
    {
        printf("%d", Specialist - input);
    }

    else if (input >= Expert)
    {
        printf("expert");
    }

    return 0;
}