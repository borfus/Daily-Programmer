// Challenge url:
// https://open.kattis.com/problems/filip

#include <stdio.h>

int main()
{
    int a, b, a_reversed = 0, b_reversed = 0;
    scanf("%i %i", &a, &b);

    for (int i = 0; i < 3; i++)
    {
        a_reversed *= 10;
        b_reversed *= 10;
        a_reversed += a%10;
        b_reversed += b%10;
        a /= 10;
        b /= 10;
    }

    if (a_reversed > b_reversed)
        printf("%i\n", a_reversed);
    else
        printf("%i\n", b_reversed);

    return 0;
}
