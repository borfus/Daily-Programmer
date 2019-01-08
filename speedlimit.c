// Challenge url:
// https://open.kattis.com/problems/speedlimit

#include <stdio.h>

int main()
{
    int loops = 0, hours = 0, mph;
    while (1)
    {
        int total_miles = 0, old_hours = 0;
        scanf("%i", &loops);
        if (loops == -1)
            break;

        for (int i = 0; i < loops; i++)
        {
            scanf("%i %i", &mph, &hours);
            total_miles += (mph * (hours - old_hours));
            old_hours = hours;
        }
        printf("%i miles\n", total_miles);
    }

    return 0;
}
