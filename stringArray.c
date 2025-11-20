/*
 * CS1111 Week 12 & 13 Programming Assignment
 */

#include <stdio.h>
#include <string.h>

// Function 1: setInitial
// Fill the first 'length' characters with '?'
void setInitial(char *word, int length) {
    for (int i = 0; i < length; i++) {
        word[i] = '?';
    }
    word[length] = '\0';
}

// Function 2: append
// Add character c to the end of string list
void append(char *list, char c) {
    int len = strlen(list);
    list[len] = c;
    list[len + 1] = '\0';
}

// Function 3: findAndReplace
// Wherever c appears in source, copy it into the same position in dest
void findAndReplace(char *source, char c, char *dest) {
    int len = strlen(source);
    for (int i = 0; i < len; i++) {
        if (source[i] == c) {
            dest[i] = c;
        }
    }
}

// Main block of string code
int main() {
    char word[10] = "apple";
    char missed[10] = "";
    char answer[26];

    setInitial(answer, 5);
    printf("The next line should print ?????. If not, there is a bug in your code\n");
    printf("%s\n", answer);

    findAndReplace(word, 'e', answer);
    printf("The next line should print ????e. If not, there is a bug in your code\n");
    printf("%s\n", answer);

    findAndReplace(word, 'p', answer);
    printf("The next line should print ?pp?e. If not, there is a bug in your code\n");
    printf("%s\n", answer);

    findAndReplace(word, 'l', answer);
    printf("The next line should print ?pple. If not, there is a bug in your code\n");
    printf("%s\n", answer);

    append(missed, 'l');
    printf("The next line should print l. If not, there is a bug in your code\n");
    printf("%s\n", missed);

    append(missed, 'm');
    printf("The next line should print lm. If not, there is a bug in your code\n");
    printf("%s\n", missed);

    return 0;
}
