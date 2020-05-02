/* Jamie Hewitt - Question 2 */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wuninitialized"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    double MAX_TOTAL = 999999999999999;
    int MAX_ENTRIES = 9999;
    long entries = 0;
    double inputSum = 0;
    char input[15];
    char *p;
    double inputNumber;
    while(inputNumber != -1) {
        printf("Please enter a positive number:\n(Max length 9 digits)\n");
        fgets(input,12,stdin);
        inputNumber = strtod(input,&p); // convert string to double.
        if(strnlen(input, 12) > 10){ // check input size
            printf("Sorry, input is too large.\nLast entry not included in results\n");
            inputNumber = -1; // Safe exit program
        }
        else if (p == input || strcmp(input, "nan")==0 || strcmp(input, "inf")==0){ // check for valid input.
            printf("Sorry, that is invalid input.\nLast entry not included in results\n");
            inputNumber = -1; // Safe exit program
        }
        else if(inputNumber <=0 && inputNumber !=-1){ // check for positive input.
            printf("Sorry, you must enter a positive number.\nLast entry not included in results\n");
            inputNumber = -1; // Safe exit program
        }
        else if (inputNumber + inputSum > MAX_TOTAL){ // check MAX_TOTAL will not be exceeded
            printf("Sorry, maximum input has been reached.\nLast entry not included in results\n");
            inputNumber = -1; // Safe exit program
        }
        else if (entries == MAX_ENTRIES){ // check MAX_TOTAL will not be exceeded
            printf("Sorry, maximum entries have been reached.\nLast entry not included in results\n");
            inputNumber = -1; // Safe exit program
        }
        else {
            printf("You entered: %f\n", inputNumber);
            inputSum = inputSum + inputNumber;
            entries++;
        }
    };
        double mean = inputSum / entries;
        unsigned long meanInt = (unsigned long)mean;
        printf("The sum of all input numbers is: %f\n", inputSum);
        printf("The average of all input numbers is: %ld\n", meanInt);
        printf("Thank you, goodbye!");
        return 0;
}

