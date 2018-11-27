// Challenge url:
// https://open.kattis.com/problems/planina

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%i", &n);
    printf("%i\n", (int)pow((int)(pow(2, n) + 1), 2));
    return 0;
}
