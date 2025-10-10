/*
 * CS1111 abs.c
 * Author: Austin Johnson
 * Email:austinjo@mtu.edu
 * 10/10/2024
 */

//Sets up program
#include <stdio.h>

double data;
void myabs(data) { if (data<0) {data=data*-1;}}

int main ()
{
    double data;
    data = -3.4;

    printf("abs(%f)=%f\n", data, myabs(data));
    data = 3.4;

    printf("abs(%f)=%f\n", data, myabs(data));
}
