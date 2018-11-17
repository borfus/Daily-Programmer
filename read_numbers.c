//MIT LICENSE (C) MIKACHU @ SWEDENS.COM
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f = fopen(argv[1], "r");
    int num, i = 0, *array = NULL, array_len = 0;
    while (fscanf(f, "%i", &num) != EOF)
    {
        if (array_len <= i)
        {
            array_len = array_len * 2 + 1;
            array = realloc(array, sizeof(int) * array_len);
        }
        array[i++] = num;
    }
    array_len = i;
    array = realloc(array, sizeof(int) * array_len);

    for (int i = 0; i < array_len; i++) 
    {
        printf("number: %i\n", array[i]);
    }
}
