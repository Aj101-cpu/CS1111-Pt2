/*
 * CS1111 Week 3 Assignment
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 9/22/25
 */

#include <stdio.h>

int main()
{
        //define user variables
        int year, month, day, ty;

        //define Zella's algorithm variables
        int Y, y, c, d, m, w;

        //prompt and read for user variables
        printf("Please enter the day [YYY/MM/DD]: \n");
        scanf("%d/%d/%d", &year, &month, &day);

        //assign value to the true year
        if ( month == 1 || month == 2)
        {
                ty = year - 1;
        }
        else
        {
                ty = year;
        }

        //assign value to little y, c, d
        y = ty % 100;
        c = ty / 100;
        d = day;

        //assign value to little m
        if ( month == 1 )
        {
                m = 13;
        }
        else if ( month == 2 )
        {
                m = 14;
        }
        else
        {
                m = month;
        }

        //assign value to w
        w = (((13*(m + 1)) / 5) + (y / 4) + (c / 4) + d + y - 2*c) % 7;


        switch (w)
        {
                case 0:
                        printf("Day of the week: Saturday\n");
                break;
                 case 1:./datstest
                        printf("Day of the week: Sunday\n");
                break;
                 case 2:
                        printf("Day of the week: Monday\n");
                break;
                 case 3:
                        printf("Day of the week: Tuesday\n");
                break;
                 case 4:
                        printf("Day of the week: Wednesday\n");
                break;
                 case 5:
                        printf("Day of the week: Thursday\n");
                break;
                 case 6:
                        printf("Day of the week: Friday\n");
                break;
        }


}
