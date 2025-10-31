* CS1111 Week 10 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 10/31/2025
 */



#include <stdio.h>

// Function to swap two elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        // of the unsorted subarray
        swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//Call function for array 1
int main() {
    int ar[] = {9, 1, 10, 2, 5, 8};
    int n = sizeof(ar) / sizeof(ar[0]);

    printf("Original array for array 1: \n");
    printArray(ar, n);

    selectionSort(ar, n);

    printf("Sorted array for array 1: \n");
    printArray(ar, n);
//Call function for array 2
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nn = sizeof(arr) / sizeof(arr[0]);

    printf("Original array for array 2: \n");
    printArray(arr, nn);

    selectionSort(arr, nn);

    printf("Sorted array for array 2: \n");
    printArray(arr, nn);
//Call function for array 3
    int arrr[] = {5, 4, 3, 2, 1};
    int nnn = sizeof(arrr) / sizeof(arrr[0]);

    printf("Original array for array 3: \n");
    printArray(arrr, nnn);

    selectionSort(arrr, nnn);

    printf("Sorted array for array 3: \n");
    printArray(arrr, nnn);



return 0;
}
