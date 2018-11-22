// Challenge url:
// https://open.kattis.com/problems/zamka

#include <stdio.h>
#include <stdlib.h>

int num_of_digits(int n)
{
    if (n < 0)
        return num_of_digits(-n);

    if (n < 10)
        return 1;

    return 1 + num_of_digits(n/10);
}

int* to_int_array(int n)
{
    int digits = num_of_digits(n);
    int *array = malloc(digits);
    int temp_n = n;

    for (int i = 0; temp_n != 0; i++)
    {
        array[i] = temp_n%10;
        temp_n /= 10;
    }

    return array;
}

int main(int argc, char *argv[])
{
    int low, high, target, n = 0, m = 0;
    scanf("%i\n%i\n%i\n", &low, &high, &target);

    int i = low, j = high;
    while (!n || !m)
    {
        if (!n)
        {
            int sum = 0, *i_array = to_int_array(i);
            for (int x = 0; x < num_of_digits(i); x++)
            {
                sum += i_array[x];
            }

            if (sum == target)
            {
                n = i;
            }

            free(i_array);
            i++;
        }
        if (!m)
        {
            int sum = 0, *j_array = to_int_array(j);
            for (int x = 0; x < num_of_digits(j); x++)
            {
                sum += j_array[x];
            }

            if (sum == target)
            {
                m = j;
            }

            free(j_array);
            j--;
        }
    }
    printf("%i\n%i\n", n, m);

    return 0;
}
