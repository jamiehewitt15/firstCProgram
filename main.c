/* Jamie Hewitt - Question 2 */
#include <stdio.h>

int main() {

    char password[1];
    printf("Type a  password: ");
    scanf("%s", password);
    printf("\nYour password is: %s\n", password);

    float x;
    printf("Type an float: ");
    scanf("%f", &x);
    printf("You typed the float: %f\n", x);

    return 0;
}
