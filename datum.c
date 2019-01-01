// Challenge url:
// https://open.kattis.com/problems/datum

#include <stdio.h>

int dayofweek(int day, int month, int year) 
{ 
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
    year -= month < 3; 
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7; 
} 

int main()
{
    int d, m;
    scanf("%i %i", &d, &m);
    int day = dayofweek(d, m, 2009);

    switch (day)
    {
        case 0:
        {
            printf("Sunday\n");
        } break;
        case 1:
        {
            printf("Monday\n");
        } break;
        case 2:
        {
            printf("Tuesday\n");
        } break;
        case 3:
        {
            printf("Wednesday\n");
        } break;
        case 4:
        {
            printf("Thursday\n");
        } break;
        case 5:
        {
            printf("Friday\n");
        } break;
        case 6:
        {
            printf("Saturday\n");
        } break;
    }

    return 0;
}
