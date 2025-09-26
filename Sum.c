/*
 * CS1111 sum.c
 * Author: Austin Johnson
 * Email:austinjo@mtu.edu
 * 9/26/2025
 */

//Sets up program
#include <stdio.h>

int main ()
{
        //Declare variables
        int pi;
        int i;
        int a=1;

        //Prompt for a positive integer and store the answer
        printf("Please enter a positive integer: \n");
        scanf("%d", &pi);

        //For loop adds all integers until the last one
        //Adds up most of the answer
        for ( i = 1; i<pi; i++)
        {
                printf("%d+", i);
                a = a+i;
        }

        //Adds the last integer and displays the answer
        if ( i = pi)
        {
                a = a + i -1;
                printf("%d=%d\n", pi, a);
        }

return 0;
}
