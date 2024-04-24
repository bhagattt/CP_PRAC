#include<stdio.h>
#include<math.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number

    if (number < 100 || number > 999) {
        printf("Invalid input: Please enter a 3-digit number.\n");
        return 0;
    }

    // Calculate result
    while (originalNumber > 0) {
        remainder = originalNumber % 10;
        result = result + pow(remainder, 3);
        originalNumber = originalNumber / 10;
    }

    // Check if the number is an Armstrong number
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
