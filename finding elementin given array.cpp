#include <stdio.h>

int main()
{
    int a[100], n, i, x, flag = 0;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array values:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter search element");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            printf("Element is found");
            flag = 1;
        }
    }

    if (flag == 0)
        printf("Element is not found");

    return 0;
}
