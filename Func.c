/* CS1111 Week 8-9 Homework
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 10/27/2025
 */


#include <stdio.h>

// Function prototypes
int square(int num);
int fac(int num);

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("square(%d)=%d, fac(%d)=%d\n", i, square(i), i, fac(i));
    }
    return 0;
}

// Returns the square of the argument
int square(int num) {
    return num * num;
}

// Returns the factorial of the argument
int fac(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}
