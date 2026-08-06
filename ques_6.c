#include <stdio.h>

int main() {
    int a[100], n, pos, item, i;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &item);

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = item;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}