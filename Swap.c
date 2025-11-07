/* CS1111 Week 11 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 11/7/2025
 *
 */

#include<stdio.h>
void swap(int *a, int *b); //calls the swap function

int main(){
    int a; //sets int a
    int b; //sets int b

    a = 1; b = 2;

    printf("a = %d, b = %d\n", a, b);
    swap(&a,&b); // Call your swap function here.

    printf("a = %d, b = %d\n", a, b); //prints the swapped values
}

void swap(int *a, int *b){ //executes swap function
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}
