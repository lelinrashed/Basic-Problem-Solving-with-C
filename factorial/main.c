#include<stdio.h>

int main()
{
    // Initialize variable
    int x, sum=1;

    // Get user input
    printf("Enter your number : ");
    scanf("%d", &x);

    // Sum of the factorial number
    for (int i = 1; i <= x; i++)
    {
        sum = sum * i;
    }
    
    // Output the sum
    printf("Sum is : %d", sum);

    return 0;
}
