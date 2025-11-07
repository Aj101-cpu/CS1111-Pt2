/* CS1111 Week 11 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 11/7/2025
 *
 */

#include<stdio.h>

// Calls the swap function
void swap(int *a, int *b);

//Declare variables
int main(){
    int a;
    int b;

    a = 1; b = 2;

    printf("a = %d, b = %d\n", a, b);

    //Calls swap function
    swap(&a,&b);

    printf("a = %d, b = %d\n", a, b);
}

//Executes swap function
void swap(int *a, int *b){
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}
~       
