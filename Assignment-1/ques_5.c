#include <stdio.h>

int main() {
    int a[100], n, item, i;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &item);

    i = n - 1;

    while(i >= 0 && a[i] > item) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = item;
    n++;

    printf("Array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}