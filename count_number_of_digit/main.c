#include<stdio.h>

int main()
{
    int x, count = 0;
    scanf("%d", &x);


    while (x != 0)
    {
        x /= 10;
        count++;
    }
    
    printf("%d\n", count);

    return 0;
}
