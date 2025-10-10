/*
 * CS1111 survey.c
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 10/10/2025
 */

//Sets up program
#include <stdio.h>

int main ()
{
        //Declare variables
        int survey[] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
        int sum = 0;
        int i = 0;

        //The for loop adds together all the values of survey
        for (i = 0; i<=11; i++)
        {
                sum = sum + survey[i];
        }

        //The if statement displays only the total value of the survey array
        if ( i = 11 )
        {
                printf("%d\n", sum);
        }
}
