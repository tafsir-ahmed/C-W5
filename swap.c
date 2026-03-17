#include <stdio.h>    // Must be at the very top

// Function prototype
void swap(int *a, int *b);

int main()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter 2nd number: ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("%d, %d\n", x, y);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}