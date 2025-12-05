/* CS1111 Week 15 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 12/5/2025
 */

#include <stdio.h>
#include <ctype.h>

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

    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("File: %s\n", argv[1]);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
