// Challenge url:
// https://www.reddit.com/r/dailyprogrammer/comments/5aemnn/20161031_challenge_290_easy_kaprekar_numbers/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int num_of_digits(int n)
{
    if (n < 0)
        return num_of_digits(-n);

    if (n < 10)
        return 1;

    return 1 + num_of_digits(n/10);
}

int* convert_to_int_array(int n)
{
    int digits = num_of_digits(n);
    int *a = malloc(digits);
    int temp_n = n;

    int i = 0;
    while (temp_n != 0)
    {
        a[i] = temp_n%10;
        temp_n /= 10;
        i++;
    } 

    return a;
} 

int split_numbers_and_add(int num_powered, int current_num)
{
    int *num_array = convert_to_int_array(num_powered);

    int total_a = 0;
    int total_b = 0;
    for (int i = 0; i < num_of_digits(num_powered); i++)
    {
        if (i < num_of_digits(current_num))
            total_a += num_array[i] * (pow(10, i));
        else
            total_b += num_array[i] * (pow(10, i - (num_of_digits(current_num))));
    }

    return total_a + total_b;
}

void kaprekar_numbers(int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        if (split_numbers_and_add(pow(i, 2), i) == i)
            printf("%d ", i);
    }
}

int main(int argc, char *argv[])
{
    kaprekar_numbers(atoi(argv[1]), atoi(argv[2]));
    printf("\n");
    return 0;
}
