/*

 * CS1111 Week 3 Lab

 * @author Austin Johnson

 * @email austinjo@mtu.edu

 * @date 09-12-2025

 */


#include <stdio.h>


int main(void) {

        int gold, tlb, trlb, GVWR;
        float pg;

        printf("What is the volume of gold in cc? ");
        scanf("%d", &gold);

        printf("What is the weight of the truck and trailer in pounds? (two seperate numbers) ");
        scanf("%d%d", &tlb, &trlb);

        GVWR=(.2*(gold*(19.3/454)+trlb)+tlb);
        pg=(gold*.38);

        printf("GVWR is: %d \n", GVWR);

        if (tlb<8500) {
                printf("GVWR is in the category of light duty.\n");
        }
        else if (tlb>8500 && tlb<26000) {
                printf("GVWR is in the category of medium duty.\n");
        }
        else {
                printf("GVWR is in the category of heavy duty.\n");
        }

        printf("Gold is worth: $%.2f\n", pg);
}
