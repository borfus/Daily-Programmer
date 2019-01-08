// Challenge url:
// https://open.kattis.com/problems/licensetolaunch

#include <stdio.h>
#include <limits.h>

int main()
{
    int days, junk = INT_MAX, days_to_wait = 0;
    scanf("%i", &days);

    for (int i = 0; i < days; i++)
    {
        int temp_junk;
        scanf("%i", &temp_junk);

        if (temp_junk < junk)
        {
            junk = temp_junk;
            days_to_wait = i;
        }
    }
    printf("%i\n", days_to_wait);

    return 0;
}
