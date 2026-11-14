
#include <stdio.h>

int main()
{
    int a[100], n, x, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter search element: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
        if(a[i] == x)
            break;

    if(i < n)
        printf("Element found at position %d", i+1);
    else
        printf("Element not found");

    return 0;
}
