// Challenge url:
// https://open.kattis.com/problems/cold

#include <stdio.h>

int main()
{
    int length, temp, below_zero = 0;
    scanf("%i", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%i", &temp);
        if (temp < 0)
            below_zero++;
    }
    printf("%i\n", below_zero);

    return 0;
}
