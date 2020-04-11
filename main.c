/* Jamie Hewitt - Question 2 */
#include <stdio.h>

int main() {

    char password[8];
    printf("Type a  password: ");
    fgets(password, 8, stdin);
    printf("\nYour password is: %s\n", password);

    return 0;
}
