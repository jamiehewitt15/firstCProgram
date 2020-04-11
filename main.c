/* Jamie Hewitt - Question 2 */
#include <stdio.h>
#define MAX_ARRAY_SIZE 100

int main() {
    int inputArray[MAX_ARRAY_SIZE];
    int arrayEntries = 0;
    int arraySum = 0;
    int input;
    do {
        printf("Please enter input positive number: ");
        scanf("%d", &input);
        if (input > 0 && sizeof(input) <= 4){
            printf("You entered: %d\n", input);
            inputArray[arrayEntries] = input;
            arrayEntries++;
        } else{
            printf("Sorry, you must enter input positive number.\n");
        }
    } while(input != -1);
    for(int i=0; i < arrayEntries; i++)
        {
            arraySum = arraySum + inputArray[i];
        }
        printf("The sum of all input numbers is: %\n", arraySum);
        printf("Thank you, goodbye!");
        return 0;
}
