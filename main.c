#include <stdio.h>

int main() {
    // Right Half Pyramid
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }


    // Left Half Pyramid
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = (n - 1); j >= i; j--) {
            printf("  ");
        }

        for (k = 1; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }


    // Full Pyramid
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }

        for (k = ((2 * i) - 1); k >= 1; k--) {
            if (k % 2 == 0) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }


    // Inverted Right Half Pyramid
    int i, j, n = 5;

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }


    // Inverted Left Half Pyramid
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        for (k = 1; k <= (n+1) - i; k++) {
            printf("* ");
        }

        printf("\n");
    }


    // Inverted Full Pyramid
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (i - 1); j++) {
            printf(" ");
        }

        for (k = ((2 * ((n + 1) - i)) - 1); k >= 1; k--) {
            if (k % 2 == 0) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }


    // Rhombus
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (i - 1); j++) {
            printf(" ");
        }

        for (k = ((2 * n) - 1); k >= 1; k--) {
            if (k % 2 == 0) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }
}