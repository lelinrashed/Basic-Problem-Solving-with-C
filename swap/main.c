#include<stdio.h>

int main()
{
    // Initialize all variables
    int x, y, temp;

    // Get the value for "x" from user
    printf("Enter the value of x : ");
    scanf("%d", &x);

    // Get the value for "y" from user
    printf("Enter the value of y : ");
    scanf("%d", &y);

    // Execute swapping
    temp = x;
    x = y;
    y = temp;

    // Output after swapping
    printf("After Swapping : x = %d, y = %d", x, y);

    return 0;
}
