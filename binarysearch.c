
#include <stdio.h>

int main()
{
    int a[100], n, x, i, low, high, mid;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter search element: ");
    scanf("%d", &x);

    low = 0;
    high = n-1;

    while(low <= high)
    {
        mid = (low + high)/2;

        if(a[mid] == x)
            break;
        else if(a[mid] < x)
            low = mid+1;
        else
            high = mid-1;
    }

    if(low <= high)
        printf("Element found at position %d", mid+1);
    else
        printf("Element not found");

    return 0;
}
