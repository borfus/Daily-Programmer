// Challenge url:
// https://open.kattis.com/problems/fizzbuzz

#include <stdio.h>

int main()
{
    int fizz, buzz, n;
    scanf("%i %i %i", &fizz, &buzz, &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % fizz != 0 && i % buzz != 0)
            printf("%i", i);
        if (i % fizz == 0)
            printf("Fizz");
        if (i % buzz == 0)
            printf("Buzz");
        printf("\n");
    }

    return 0;
}
