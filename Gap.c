/* CS1111 Week 8-9 Homework
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 10/27/2025
 */


#include <stdio.h>

// Function prototypes
int abs(int num);
int gap(int arr[], int size);

int main() {
    int data1[5] = {1, 3, 5, 10, 12};
    int data2[8] = {12, 3, 5, 7, 10, 15, -3, 10};
    int gap1;
    int gap2;

    gap1 = gap(data1, 5);
    gap2 = gap(data2, 8);

    printf("The largest gap of data set 1 is %d\n", gap1);
    printf("The largest gap of data set 2 is %d\n", gap2);

    return 0;
}

// Returns the absolute value of the argument
int abs(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

// Returns the absolute value of the argument
int abs(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

// Returns the largest gap between adjacent elements
int gap(int arr[], int size) {
    int maxGap = 0;
    for (int i = 0; i < size - 1; i++) {
        int currentGap = abs(arr[i + 1] - arr[i]);
        if (currentGap > maxGap) {
            maxGap = currentGap;
        }
    }
    return maxGap;
}:wq
