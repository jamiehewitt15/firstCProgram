/* Jamie Hewitt - Question 2 */
#include <stdio.h>

int main() {

    float a;

    do {
        printf("Please enter a positive number: ");
        scanf("%f", &a);
        if (a > 0){
            printf("You entered: %f\n", a);
        } else{
            printf("Sorry, you must enter a positive number.\n");
        }


    } while(a != -1);
        printf("Thank you, goodbye!");
        return 0;
}
