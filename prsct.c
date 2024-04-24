#include <stdio.h>

int main() {
    int arr[5] = {2, 5, 4, 1, 3};
    int i, max, min, max_index, min_index, temp;

    max = arr[0];
    min = arr[0];
    max_index = 0;
    min_index = 0;

    for(i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;

    printf("After interchanging max and min elements, the array is: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}