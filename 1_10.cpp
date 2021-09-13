#include <stdio.h>

int main() {
   int x;
   scanf("%d", &x);
   for(int i = 1; i <= 12; i++) {
      printf("%d X %d = %d\n", x, i, x*i);
   }
   return 0;
}