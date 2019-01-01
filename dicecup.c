// Challenge url:
// https://open.kattis.com/problems/dicecup

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%i %i", &n, &m);

    if (m < n)
    {
        int swap = n;
        n = m;
        m = swap;
    }

    for (int i = n+1; i < m+2; i++)
    {
        printf("%i\n", i);
    }

    return 0;
}
