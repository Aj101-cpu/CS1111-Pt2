/* CS1111 Week 13 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 11/21/2025
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if argument is provided
    if (argc != 2) {
        // Print usage if missing
        printf("Usage: %s filename\n", argv[0]);
        return 1; // Exit with error
    }

    // Print the provided argument
    printf("The file name is %s\n", argv[1]);

    return 0; // Successful execution
}
