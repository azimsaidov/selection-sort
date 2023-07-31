#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
      for (int x = 0; x < n - 1; x++) {
        int minimumIndex = x;

        for (int y = x + 1; y < n; y++) {
            if (arr[y] < arr[minimumIndex] ) {
                minimumIndex = y;
            }
        }

        int temp = arr[x];
        arr[x] = arr[minimumIndex];
        arr[minimumIndex] = temp;
    }

}

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Generate random integers between 0 and 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
