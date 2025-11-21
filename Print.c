/* CS1111 Week 13 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 11/21/2025
 */

#include <stdio.h>
#include <string.h>

// Function to print characters with spaces
void printWithSpace(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        if (i < strlen(str) - 1) {
            printf(" "); // Add space between characters
        }
    }
    printf("\n");
}

int main() {
    char input[21]; // 20 chars + null terminator

    printf("Please enter a string up to 20 characters: ");
    scanf("%20s", input); // Limit input to 20 chars

    // Call function
    printWithSpace(input);

    return 0;
}
