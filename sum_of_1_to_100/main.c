#include<stdio.h>

int main()
{
    // Initialize variable
    int sum = 0;
    
    // Looping 1 to 100 and summation
    for (int i = 0; i <= 100; i++)
    {
        sum += i;
    }
    
    // Output sum
    printf("Sum : %d", sum);

    return 0;
}