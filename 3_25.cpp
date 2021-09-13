#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);

   if(n <= 1) {
      printf("error\n");
      return 0;
   }

   int sum = (n * (n + 1)) / 2;
   printf("%d", sum);

   return 0;
}