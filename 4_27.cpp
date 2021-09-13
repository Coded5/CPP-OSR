#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);

   if(n < 1 || n > 20) {
      printf("error\n");
      return 0;
   }

   for(int r = 0; r < n; r++) {
      for(int c = 0; c < n; c++) {
         int index = ((c + (r * n)) + 1) % 10;
         printf("%d", index);
      }
      printf("\n");
   }

   return 0;
}