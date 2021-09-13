#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);

   if(n < 0 || n > 10000000000) {
      printf("error\n");
      return 0;
   }

   if(n == 1 || n == 0) {
      printf("no\n");
      return 0;
   }

   int i = 2;
   while(i*i <= n) {
      if(n % i == 0) {
         printf("no\n");
         return 0;
      }
      i++;
   }

   printf("yes\n");
   return 0;
}