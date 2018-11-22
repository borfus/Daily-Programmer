// Challenge url:
// https://open.kattis.com/problems/qaly

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qaly = 0, x, y; 
    int length;
    fscanf(stdin, "%i", &length);
    while (fscanf(stdin, "%f %f", &x, &y) != EOF)
        qaly += x * y;

    printf("%.3f\n", qaly);

    return 0;
}
