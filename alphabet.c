#include <stdio.h>
void printRow(int offset, int maxChar) {
  for (int s = 0; s < offset; s++)
      printf(" ");
  for (int i = 0; i <= maxChar; i++)
      printf("%c", 'A' + i);
  for (int i = maxChar - 1; i >= 0; i--)
      printf("%c", 'A' + i);
printf("\n");
}
int main() {
    int k;
    scanf("%d", &k);
    for (int i = 0; i <= k; i++)
        printRow(i, k - i);
    for (int i = k - 1; i >= 0; i--)
        printRow(i, k - i);
    return 0;
}
