/* CS1111 Week 4 Lab doublemoney.c
 *
 * Author: Austin Johnson
 * Email:austinjo@mtu.edu
 * Date 9/19/2025
*/
        #include <stdio.h>
        int main()
{

        //Declare variables
        float rate = 0;
        int years = 0;
        float m, ma;

        //Prompt the user for the yearly return rate and store that value as a float

        printf("How much money are you investing?\n");
        scanf("%f", &m);

        printf("What is the yearly return rate in percentage? \n");
        scanf("%f", &rate);

        printf("With a rate of %.2f %, ", rate);

        rate = rate/100 + 1;

        ma=m*2;

        //Calculating years 
        while (m<ma)
        {
                m = m*rate;
                years++;
        }

        //Printing rate and years
        printf("it will take %d years to double my money.\n", years);

        return 0;
}
