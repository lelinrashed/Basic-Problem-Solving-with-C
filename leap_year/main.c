#include <stdio.h>

int main()
{
    // Initilize variable
    int x;

    // Get year intput from user
    printf("Enter year : ");
    scanf("%d", &x);

    // Check leap year
    if ((x % 4 == 0) && ((x % 400 == 0) || (x % 100 != 0)))
    {
        printf("%d this is a leap year.", x);
    }
    else
    {
        printf("%d this is not a leap year", x);
    }

    return 0;
}