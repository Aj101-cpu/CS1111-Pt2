/*
 * CS1111 max.c
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 10/10/2024
 */

#include <stdio.h>

//Function returning the max between two numbers
int max(int num1, int num2, int num3){

   //Local variable declaration 
   int result;

   if(num1 > num2)
      result = num1;
   else
      result = num2;

   if(num3 > result)
           result = num3;
   else
           result = result;

   return result;
}

int main()
{
        //Declare variables
        int input1;
        int input2;
        int input3;

        //Prompt user to enter integers and store them as variables
        printf("Input 3 integers: \n");
        scanf("%d%d%d", &input1, &input2, &input3);

        //Run the max function to see which is the biggest integer and output it
        printf("The largest integer is: %d\n", max(input1, input2, input3));

   return 0;
}
