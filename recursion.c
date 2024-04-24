#include <stdio.h>

int fact(int n);

int main() {
    int number, result;
    printf("Give a number \n");
    scanf("%d", &number);
    result = fact(number);
    printf("Fact= %d", result);
    return 0;
}

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}