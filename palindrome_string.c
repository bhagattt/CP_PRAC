#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int isPalindrome = 1; // Assume it's a palindrome by default

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; // If characters don't match, it's not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
