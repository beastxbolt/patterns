#include <stdio.h>

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

int main() {
    int array[] = { 2, 1, 3, 8, 2, 4, 9, 6, 1, 0, 4, 5, 3, 7 };
    int lengthOfArray = sizeof(array) / sizeof(array[0]);

    printf("Before sort:");
    for (int i = 0; i < lengthOfArray; i++) {
        printf(" %d", array[i]);
    }

    for (int i = 0; i < lengthOfArray - 1; i++) {
        for (int j = 0; j < lengthOfArray - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }

    printf("\n");
    printf("After sort:");
    for (int i = 0; i < lengthOfArray; i++) {
        printf(" %d", array[i]);
    }
}