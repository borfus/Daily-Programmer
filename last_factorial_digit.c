// Challenge url:
// https://open.kattis.com/problems/lastfactorialdigit

#include <stdio.h>

int factorial(int n)
{
    if (n >= 1)
        return n * factorial(n-1);
    else
        return 1;
}

int main()
{
    int n;
    fscanf(stdin, "%i", &n); 

    while (fscanf(stdin, "%i", &n) != EOF)
        printf("%i\n", factorial(n)%10); 

    return 0;
}
