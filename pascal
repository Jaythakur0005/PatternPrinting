#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++) {
for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
}
long long val = 1;
for (int j = 0; j <= i; j++) {
printf("%lld ", val);
val = val * (i - j) / (j + 1);
}
printf("\n");
} 
return 0;
}
