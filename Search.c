/*
 * CS1111 Search.c
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 10/31/2024
 */

//Sets up program
#include <stdio.h>

//States a function that searchs for a specific index
int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (x == array[mid])
      return mid;

    // Search the right half
    if (x > array[mid])
      return binarySearch(array, x, mid + 1, high);

    // Search the left half
    return binarySearch(array, x, low, mid - 1);
  }

  return -1;
}

//Declaring all other variables needed
int main(void) {
  int array[] = {2, 3, 4, 6, 7, 8, 9, 10};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 3;
  int xs = 5;
  int xt = 7;
  int xf = 9;

 //Running the function through all the values
  int result = binarySearch(array, x, 0, n - 1);
  int results = binarySearch(array, xs, 0, n - 1);
  int resultt = binarySearch(array, xt, 0, n - 1);
  int resultf = binarySearch(array, xf, 0, n - 1);

 //Looking to see if the key exists
 //If it does exist prints out what index contains that key
 //If it does not prints out -1
  if (result == -1)
    printf("-1 ");
  else
    printf("%d ", result);

  if (results == -1)
    printf("-1 ");
  else
    printf("%d ", results);
                                                                                                                                                                                                                            1,2           Top
 if (resultt == -1)
    printf("-1 ");
  else
    printf("%d ", resultt);

  if (resultf == -1)
    printf("-1 ");
  else
    printf("%d\n ", resultf);

  return 0;
}
                                                            
