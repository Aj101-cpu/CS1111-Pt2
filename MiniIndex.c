/*
 * CS1111 MiniIndex.c
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 10/24/2025
 */

//Sets up program
#include <stdio.h>

// Function to find the index of the minimum value in a specified range
int minIndex(int data[], int begin, int end) {
    int minIdx = begin;
    for (int i = begin + 1; i <= end; i++) {
        if (data[i] < data[minIdx]) {
            minIdx = i;
        }
    }
    return minIdx;
}

// Example usage
int main() {
    int data[] = {2, 3, 4, 10, 9, 8, 7, 6};
    int size = sizeof(data) / sizeof(data[0]);

    printf("minIndex(data, 0, 7) = %d\n", minIndex(data, 0, 7)); // Expected: 0
    printf("minIndex(data, 1, 7) = %d\n", minIndex(data, 1, 7)); // Expected: 1
    printf("minIndex(data, 3, 7) = %d\n", minIndex(data, 3, 7)); // Expected: 7
    return 0;
}

