#include <stdio.h>

// Function declaration
int fact(int n);

int main() {
    int number;
    printf("Give a number: ");
    scanf("%d", &number);

    int result = fact(number);
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}

// Function definition
int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}