#include <stdio.h>
int main() {
  int k;
  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
      for (int s = 0; s < k - i - 1; s++)
          printf(" ");
      for (int ch = 0; ch <= i; ch++)
          printf("%c", 'A' + ch);
      for (int ch = i - 1; ch >= 0; ch--)
          printf("%c", 'A' + ch);
      printf("\n");
 }
   return 0;
}
