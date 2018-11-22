// Challenge url:
// https://open.kattis.com/problems/faktor

#include <stdio.h>
#include <math.h>

int main()
{
    float articles, impact_factor;
    scanf("%f %f", &articles, &impact_factor);

    printf("%.0f\n", ceil(articles*(impact_factor-.99)));

    return 0;
}
