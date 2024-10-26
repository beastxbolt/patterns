#include<stdio.h>

int main() {
    char name[5] = "Book", reversed[5] = "";
    int i, length = (sizeof(name) / sizeof(name[0])) - 1;

    for (i = 1; i <= length; i++) {
        reversed[i - 1] = name[length - i];
    }

    printf("%s\n", name);
    printf("%s", reversed);



    char str1[6] = "Story", str2[5] = "Book", str3[10] = "";
    int str1len = (sizeof(str1) / sizeof(str1[0])) - 1;
    int str2len = (sizeof(str2) / sizeof(str2[0])) - 1;
    int i, j;

    for (i = 1; i <= str1len; i++) {
        str3[i - 1] = str1[i - 1];
    }

    for (j = 1; j <= str2len; j++) {
        str3[(str1len + j) - 1] = str2[j - 1];
    }

    printf("%s", str3);



    int i, j, k, a, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n - i); j++) {
            printf("  ");
        }

        for (k = 1, a = i; a >= i; k++) {
            printf("%d ", a);

            if ((k + i) > (2 * i) - 1) {
                a--;
            } else {
                a++;
            }

        }
        printf("\n");
    }
    
}