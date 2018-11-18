// Challenge url:
// https://www.reddit.com/r/dailyprogrammer/comments/6melen/20170710_challenge_323_easy_3sum/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int*)a - (*(int*)b));
}

int main(int argc, char *argv[])
{
    // Grab numbers from file
    FILE *file = fopen(argv[1], "r");
    int current_num, i = 0, *numbers = malloc(sizeof(int)*10), array_len = 10;
    while (fscanf(file, "%i", &current_num) != EOF)
    {
        if (array_len <= i)
        {
            array_len = array_len * 2;
            numbers = realloc(numbers, sizeof(int) * array_len);
        }
        numbers[i++] = current_num;
    }
    array_len = i;
    numbers = realloc(numbers, sizeof(int) * array_len);

    qsort(numbers, array_len, sizeof(int), compare);

    for (i = 0; i < array_len; i++)
    {
        if (numbers[i-1] == numbers[i] && i > 0)
        {
            continue;
        }
        int x = numbers[i], y, z, start = i+1, end = array_len-1;

        while (start < end)
        {
            y = numbers[start];
            z = numbers[end];

            if (x + y + z == 0)
            {
                printf("%i %i %i\n", x, y, z);
                while (numbers[--end] == numbers[end+1]) {}
            }
            else if (x + y + z > 0)
            {
                while (numbers[--end] == numbers[end+1]) {}
            }
            else
            {
                while (numbers[++start] == numbers[start-1]) {}
            }
        }
    }

    free(numbers);
    return 0;
}
