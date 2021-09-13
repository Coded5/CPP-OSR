#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);

   if(n <= 0) return 0;

   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n-i-1; j++) {
         printf(" ");
      }
      for(int j = 0; j < (2*i) + 1; j++) {
         printf("%s", (i == n-1 || j == 0 || j == 2*i) ? "*" : " ");
      }
      printf("\n");
   }

   return 0;
}