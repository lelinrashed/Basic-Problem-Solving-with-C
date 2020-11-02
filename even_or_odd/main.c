// Problem name : Even or Odd

#include <stdio.h>

int main()
{
    // Initialize variable
    int x;

    // Get input from user
    printf("Enter your number : ");
    scanf("%d", &x);

    // Check even or odd
    if (x % 2 == 0)
    {
        printf("%d this number is even", x);
    }
    else
    {
        printf("%d this number is odd", x);
    }

    return 0;
}
