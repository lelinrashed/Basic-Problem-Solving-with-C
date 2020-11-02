#include <stdio.h>

int main()
{
    int arr[100], f_range;

    scanf("%d", &f_range);

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < f_range; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d ", arr[i]);
    }

    return 0;
}