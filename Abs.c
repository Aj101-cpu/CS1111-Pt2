/* CS1111 Week 7 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 10/10/2025
 */

#include <stdio.h>

double x;// declares variable x

double myabs(double x) {//starts function myabs to be called later
        if (x<0){// if statement to check is x is less than 0
                x = x * -1;//multiplies x by -1
        }
        else {
                x = x;//eles makes x equal to itself
        }
        return x;//returns x as data
        }


int main()
{
    double data;//declares data as variable
    data = -3.4;
    printf("abs(%f)=%f\n", data, myabs(data));//reads out data = -3.4
    data = 3.4;
    printf("abs(%f)=%f\n", data, myabs(data));// reads out data = 3.4
}
