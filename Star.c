/* CS1111 Week 5 Lab star.c
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date 9/26/2025
*/

#include <stdio.h>
int main(){

//Initializing variables
        int posInt = 0;

//Prints and scans for posotion integer (# of star lines)
        printf("Please enter a position integer: ");
        scanf("%d", &posInt);

//For loop that runs the other loop the numper of times scanned for the position integer
        for (int j = 0; j < posInt; j++){

//For loop that prints out the number of stars based on the current value of j 
         for ( int i = 0; i <= j; i++){

                         printf ("*");
                 }

//Prints line break
        printf("\n");
        }
        return 0;
}
