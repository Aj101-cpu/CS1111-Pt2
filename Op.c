/*
 * CS1111 Week 4 Lab op.c
 * Author: Austin Johnson
 * Email:austinjo@mtu.edu
 * 9/19/2025
 */

//Sets up the program

#include <stdio.h>

int main()
{

        //Declare variable 
        char opper;

        // Prompt for operation from the user then store it as a char
        printf("Please enter an operation: \n");
        scanf("%c",&opper);


        // Runs the char through a switch to figure out what the user's chosen operation is
        switch(opper)
        {
                case '+':
                        printf("Addition\n");
                break;
                case '-':
                        printf("Subtraction\n");
                break;
                case '*':
                        printf("Multiplication\n");
                break;
                case '/':
                        printf("Division\n");
                break;
                case '%':
                        printf("Modulo\n");
                break;
                case '>':
                        printf("Greater than\n");
                break;
                case '<':
                        printf("Less than\n");
                break;
                case '!':
                        printf("Not\n");
                break;
                default:
                        printf("unknown\n");
                break;
        }
        return 0;
}
