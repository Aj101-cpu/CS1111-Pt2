/* CS1111 Week 15 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 12/5/2025
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: Missing filename\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Unable to open file %s\n", argv[1]);
        return 1;
    }

    int count = 0;
    int ch;

    // Read each character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);

    printf("%d characters are in %s\n", count, argv[1]);

    return 0;
}
