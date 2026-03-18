#include <stdio.h>
#include <stddef.h>

// Bubble Sort function
void BubbleSort(int arr[], size_t n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    size_t n;

    // Step 1: Ask user for size of array
    printf("Enter number of elements: ");
    scanf("%zu", &n);

    int arr[n];  // Step 2: Create array of size n

    // Step 3: Take input from user
    printf("Enter %zu integers:\n", n);
    for (size_t i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 4: Show array before sorting
    printf("Before sorting: ");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 5: Call BubbleSort
    BubbleSort(arr, n);

    // Step 6: Show array after sorting
    printf("After sorting: ");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}