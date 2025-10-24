/*
 * CS1111 Arraymax.c
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 10/24/2025
 */

//Sets up program
#include <stdio.h>
int maxValue(int x[], int num)
{
        int lg = x[0];

        for (int i = 0; i<num; i++)
        {
                if (lg>x[i])
                {
                        lg = lg;
                }
                else
                {
                        lg = x[i];
                }
        }
        return lg;
}

int main()
{
        int a[6]={1,4,5,10,8,9};
        int b[8]={4,5,60,5,1,100,8,10};

        printf("max in array a is %d \n", maxValue(a, 6));
        printf("max in array b is %d \n", maxValue(b, 8));


}
