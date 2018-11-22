// Challenge url:
// https://open.kattis.com/problems/sibice

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int x, y, current_num, length;

    for (int i = 0; fscanf(stdin, "%i", &current_num) != EOF; i++)
    {
        if (!i)
        {
            length = current_num;
            fscanf(stdin, "%i %i\n", &x, &y); 
            continue;
        }

        if (current_num <= sqrt((x*x) + (y*y)))
            printf("DA\n");
        else
            printf("NE\n");
    } 

    return 0;
}
