#include <stdio.h>

int main()
{
    int base, pow, result = 1;

    scanf("%d %d", &base, &pow);

    for (int i = 1; i <= pow; i++)
    {
        result *= base;
    }

    printf("Result is : %d\n", result);

    return 0;
}