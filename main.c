/* Jamie Hewitt - Question 2 */
#include <stdio.h>
#define MAX_ARRAY_SIZE 100

int main() {
    int inputArray[MAX_ARRAY_SIZE];
    int arrayEntries = 0;
    int arraySum = 0;
    int input;

    while(input != -1) {
        printf("Please enter input positive number: ");
        scanf("%d", &input);
        if (input > 0 && sizeof(input) <= 4){
            printf("You entered: %d\n", input);
            inputArray[arrayEntries] = input;
            arrayEntries++;
        } else if (input <0 && input !=-1){
            printf("Sorry, you must enter input positive number.\n");
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
