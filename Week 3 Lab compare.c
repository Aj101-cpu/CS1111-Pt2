/*

 * CS1111 Week 3 Lab

 * @author Austin Johnson

 * @email austinjo@mtu.edu

 * @date 09-12-2025

 */



#include <stdio.h>

int main()

{
        float num1, num2;
        printf("Enter two numbers: \n");
        scanf("%f%f", &num1, &num2);


        if ( num1 > num2 && num1 != num2)
        {
                printf("Does the first number equal the second number? No\nIs the first number less than the second? No\nIs the first number greater than the second? Yes\nIs the first number less than or equal to the second? No\nIs the first number greater than or equal to the second? Yes\n");
        }
        else if ( num1 < num2 && num1 != num2)
                {
                        printf("Does the first number equal the second number? No\nIs the first number less than the second? Yes\nIs the first number greater than the second? No\nIs the first number less than or equal to the second? Yes\nIs the first number greater than or equal to the second? No\n");
                }

        else if ( num1 == num2 )
                {
                        printf("Does the first number equal the second number? Yes\nIs the first number less than the second? No\nIs the first number greater than the second? No\nIs the first number less than or equal to the second? Yes\nIs the first number greater than or equal to the second? Yes\n");
                }
}
