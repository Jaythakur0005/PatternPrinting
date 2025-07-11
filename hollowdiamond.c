#include <stdio.h>
int main() {
    int k;
    scanf("%d", &k);
    int n = 2 * k + 1;
    for (int i = 0; i < n; i++) {
        int space = i < k ? k - i : i - k;
        for (int s = 0; s < space; s++)
            printf(" ");
        printf("*");
        int gap = n - 2 * space - 2;
        if (gap >= 0) {
            for (int g = 0; g < gap; g++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
