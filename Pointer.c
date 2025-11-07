/*
 * CS1111 Week 11 Lab
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 11/7/2025
 */

#include <stdio.h>

int main()
{
//Initilizies variables
    int num = 5;
    double rate = 5.4;
    char letter = 'B';

//Initilizies pointers, sets the equal to variables
    int *numP = &num;
    double *rateP = &rate;
    char *letterP = &letter;

//Increases variables by 1
    *numP = *numP+1;
    *rateP = *rateP+1;
    *letterP = *letterP+1;

//Prints out the variable value and the address
    printf("%d    %p\n", *numP ,numP);
    printf("%.1f  %p\n", *rateP, rateP);
    printf("%c    %p\n", *letterP, letterP);

return 0;
}
