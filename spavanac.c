// Challenge url:
// https://open.kattis.com/problems/spavanac

#include <stdio.h>

int main()
{
    int hour, minute;
    scanf("%i %i", &hour, &minute);

    if (minute >= 45)
        printf("%i %i\n", hour, minute-45);
    else
    {
        if (hour == 0)
           hour = 24; 
        printf("%i %i\n", hour-1, 60-(45-minute));
    }

    return 0;
}
