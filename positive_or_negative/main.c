#include <stdio.h>

int main()
{
    // initialize variable
    int x;

    // Get data from user
    printf("Please enter your number : ");
    scanf("%d", &x);

    // Check the number if positive or not
    if (x < 0)
    {
        printf("This is negative number.");
    }
    else
    {
        printf("This is positive number");
    }

    return 0;
}