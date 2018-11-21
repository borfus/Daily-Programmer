// Challenge url:
// https://www.reddit.com/r/dailyprogrammer/comments/65vgkh/20170417_challenge_311_easy_jolly_jumper/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    FILE *file = fopen(argv[1], "r");
    int current_num, length = 0, count = 0, *numbers = NULL, *jolly_numbers = NULL;
    bool jolly = true;
    
    while (fscanf(file, "%i", &current_num) != EOF)
    {
        if (!length)
        {
            length = current_num;
            numbers = malloc(length*sizeof(int));
            jolly_numbers = malloc(length*sizeof(int));
            continue;
        }
        numbers[count++] = current_num;
    }
    fclose(file);

    printf("%i ", length);
    for (int i = 0; i < length; i++)
    {
        if (i > 0)
        {
            int diff = abs(numbers[i] - numbers[i-1]);
            if (diff < length && diff != 0)
                jolly_numbers[diff] = diff;
            else
                jolly = false;
        }

        printf("%i ", numbers[i]);
    }

    for (int i = 0; i < length; i++)
        if (i > 0 && !jolly_numbers[i])
            jolly = false;

    if (jolly)
        printf("JOLLY\n");
    else
        printf("NOT JOLLY\n");

    free(numbers);
    free(jolly_numbers);
    return 0;
}
