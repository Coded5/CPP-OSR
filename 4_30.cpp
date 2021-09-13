#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);

   if(n < 3 || n > 20) {
      printf("error\n");
      return 0;
   }

   int curr = 1;
   for(int y = 0; y < n; y++) {
      for(int x = 0; x < n; x++) {
         if(y == 0 || y == n-1 || x == 0 || x == n-1) {
            printf("%d", curr % 10);
            curr++;
         } else {
            printf(" ");
         }
      }
      printf("\n");
   }

   return 0;
}