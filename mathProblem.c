/*
 * CS1111 Week 5-6 Assignment
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 10/5/25
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numProblems, questionNum = 1, totalPoints = 0;
    int num1, num2, answer, userAnswer;
    char enter;

    srand(time(NULL)); // Seed random number generator

    // Welcome message
    printf("\nWelcome to the Math Genius Program!\n\n");
    printf("How many problems would you like to do today? ");                   scanf("%d", &numProblems);                                                  getchar(); // Consume newline after number input                                                                                                        printf("Ok! You will be given %d math problems. Good luck with them!\n\n", numProblems);
    printf("Press enter to start.");
    enter = getchar(); // Wait for enter

    while (questionNum <= numProblems) {
        printf("\nQuestion %d\n", questionNum);

        // Alternate between addition and subtraction
        num1 = rand() % 90 + 10; // Two-digit number
        num2 = rand() % 90 + 10;
        int correctAnswer;
        char op;

        if (questionNum % 2 == 1) {
            op = '+';
            correctAnswer = num1 + num2;
        } else {
            op = '-';
            // Ensure non-negative result
            if (num2 > num1) {
                int temp = num1;
                num1 = num2;
                num2 = temp;
            }
            correctAnswer = num1 - num2;
        }

        // Display formatted problem
        printf("%2d %c %2d = ", num1, op, num2);
        scanf("%d", &userAnswer);

        if (userAnswer == correctAnswer) {
            printf("Correct! 10 points. Total points: %d\n", totalPoints += 10);
        } else {
            printf("Wrong. Please try again.\n");
            printf("%2d %c %2d = ", num1, op, num2);
            scanf("%d", &userAnswer);

            if (userAnswer == correctAnswer) {
                printf("Correct! 5 points. Total points: %d\n", totalPoints += 5);
            } else {
                printf("Wrong again. 0 points. Total points: %d\n", totalPoints += 0);
            }                                                                       }

        questionNum++;
    }

    // Final percentage and rank
    float percentage = ((float)totalPoints / (numProblems * 10)) * 100;
    printf("\nYou got %.2f%%! ", percentage);

    if (percentage >= 93)
        printf("Excellent!\n");
    else if (percentage >= 87)
        printf("Very Good!\n");
    else
        printf("Keep working hard!\n");

    printf("Thank you for using my math problem generator!\n");

    return 0;
}
