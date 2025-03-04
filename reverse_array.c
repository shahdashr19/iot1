#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *i = arr;        
    int *j = arr + size - 1; 
    int temp;
    while (i < j) {
        temp = *i;
        *i = *j;
        *j = temp;
        i++;
        j--;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}