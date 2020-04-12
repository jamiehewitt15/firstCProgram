/* Jamie Hewitt - Question 2 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 100

int main() {
    int inputArray[MAX_ARRAY_SIZE];
    int arrayEntries = 0;
    int arraySum = 0;
    char input[16];
    char *p;
    int  inputNumber;
    
    while(input != -1) {
        printf("Please enter input positive number: ");
        fgets(input,16,stdin);
        inputNumber = strtol(input,&p,10);
        if (p == input){
            printf("Sorry, that is invalid input.\n");
        }
        else if(inputNumber <=0 && input !=-1){
            printf("Sorry, you must enter input positive number.\n");
        }
        else if (input > 0 && sizeof(inputNumber) <= 4){
            printf("You entered: %d\n", inputNumber);
            inputArray[arrayEntries] = inputNumber;
            arrayEntries++;
        }
    };
    for(int i=0; i < arrayEntries; i++)
        {
            arraySum = arraySum + inputArray[i];
        }
        printf("The sum of all input numbers is: %d\n", arraySum);
        printf("The average of all input numbers is: %d\n", arraySum/arrayEntries);
        printf("Thank you, goodbye!");
        return 0;
}
