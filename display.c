/* CS1111 Week 15 Lab
 *
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * Date: 12/5/2025
 */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

char ** readWordList(char *, int *);

int main(int argc, char *argv[]) {
   char ** wordList;
   char inputFile[100];
   int count = 0;
   int i;

   if (argc!=2) {
      printf("You need to provide the word list file name.\n ");
      printf("Usage: $0 filename\n");
      return -1;
   }
   wordList = readWordList(argv[1], &count);
   if (wordList == NULL) {
      printf("Read word failed\n");
      exit(1);
   }


   //Display the word in the wordList. 
   for (i = 0; i < count; i++) {
      printf("%s\n", wordList[i]);
   }

   return 0;
}

/* 
 * Read the inputfile, update the count, and return the word list pointer. 
 * assume all the words in the inputfile are less than 20 characters. 
 */
char** readWordList(char inputFile[], int *count) {
   FILE   *inputPtr;
   char   word[20];
   int    ret;
   int    size;
   char   **wordlist;
   int    i;

   /* open inputFile for read */
   if ((inputPtr = fopen(inputFile,"r")) == NULL) {
       printf("Trying to open file %s\n", inputFile);
       perror("open file failed");
       *count = 0;
       return NULL;
   }

   size = 0;
   while ( (ret = fscanf(inputPtr, "%s", word)) != EOF) {
      size ++;
   };
   fclose(inputPtr);

   /* allocate pointers */
   wordlist = (char**) malloc( (sizeof (char*)) * size);
   inputPtr = fopen(inputFile,"r");
   i = 0;
   while ( fscanf(inputPtr, "%s", word) != -1 ) {
        /* allocate the space for each word: assume it is less than 20 chars */
        wordlist[i]=(char*)malloc(20);
        strcpy(wordlist[i], word);
        i++;
   }
   fclose(inputPtr);

   *count=size;
   return wordlist;
}

