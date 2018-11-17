//MIT LICENSE (C) MIKACHU @ SWEDENS.COM
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
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

    for (int i = 0; i < array_len; i++) 
    {
        printf("number: %i\n", numbers[i]);
    }
    free(numbers);
}
