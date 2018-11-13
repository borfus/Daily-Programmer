// Challenge url:
// https://www.reddit.com/r/dailyprogrammer/comments/6s70oh/2017087_challenge_326_easy_nearest_prime_numbers/

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n == 1 || n == 2)
        return true;

    for (int i = 2; i <= (n/2); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (is_prime(n))
    {
        printf("%d is prime.\n", n);
    }
    else
    {
        int low, high = 0;
        int i = n, j = n;
        for (;;)
        {
            if (!low || !high)
            {
                if (!low)
                {
                    if (is_prime(--i))
                        low = i;
                }

                if (!high)
                {
                    if (is_prime(++j))
                        high = j;
                }
            }
            else
                break;
        }

        printf("%d < %d > %d\n", low, n, high);
    }

    return 0;
}
