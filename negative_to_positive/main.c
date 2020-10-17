#include<stdio.h>

int main()
{
    // Initialize variables
    int x;

    // Get input from user
    printf("Please enter your negative number : ");
    scanf("%d", &x);

    // Convert negative to positive
    x *= -1;

    // Output the expected positive number
    printf("Your expected positive number : %d", x);

    return 0;
}