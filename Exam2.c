#include <stdio.h>

// Prototype for selection sort function using a pointer 
void select(int *A, int size);

// Helper function prototype for swapping using call by reference with pointers
void swap( int *a, int *b);

int main() {
   int i;
   int A[8]={4,3,6,13,10,25,2,7};

   // Pass the base address of A to the sorting function
   select(A, 8);

   // Print the sorted array
   for (i=0;i<8;i++) {
     printf ("%d", A[i]);
   }
   printf("\n");

      return 0;
}


// Helper function to swap two integer values using call by reference
void swap(int *a, int *b) {
    int tmp = *a; // Store the value pointed to by 'a'
    *a = *b;      // Set the value pointed to by 'a' to the value pointed to by 'b'
    *b = tmp;     // Set the value pointed to by 'b' to the original value of 'a'
}


// Selection Sort implementation using explicit pointer arithmetic
void select(int *A, int size) {
   int i;

   // Outer loop iterates through each position 
   for (i = 0; i < size - 1; i++) {
    // 'smallestPtr holds the address of the smallest element found so far 
        int *smallestPtr= A + i;
        int j;

        // Inner loop searches the rest of the unsorted section

        for (j = i + 1; j < size; j++) {
            // Check if the value at the current address is less than 
            // the value at the current smallest address 
            if (*(A + j) < *smallestPtr) {
                smallestPtr = (A + j); // Update the pointer to the new smallest element's address
            }
        }

        // If the address of the smallest element found is different from the 
        // current starting address of the unsorted section (A+i), swap them.
        if (smallestPtr != (A + i)) {
            // Use the swap helper function, passing the addresses (call by reference)
            swap((A + i), smallestPtr);
        }
        }
}
