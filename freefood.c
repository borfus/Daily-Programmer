// Challenge url:
// https://open.kattis.com/problems/freefood

#include <stdio.h>

int main()
{
    int n, start, end, days = 0, free_food_day[2000] = { 0 };
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i %i", &start, &end);

        for (int j = start; j <= end; j++)
        {
            if (!free_food_day[j])
            {
                days++;
                free_food_day[j] = 1;
            }
        }
    }
    printf("%i\n", days);
    return 0;
}
