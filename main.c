/* Jamie Hewitt - Question 2 */
#include <stdio.h>

int main() {
    int a, b;
    printf("Please type two letters: ");
    a = getchar();
    b = getchar();

    printf("You typed: %c and %c", a, b);
    printf("You typed: ");
    putchar(a);
    printf(" and ");
    putchar(b);

    return 0;
}
