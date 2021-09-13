#include <stdio.h>

int main() {
   long x;
   scanf("%d", &x);

   if(x < 0) {
      printf("error\n");
      return 0;
   }

   long s = 1;
   for(int i = 1; i <= x; i++) {
      s *= i;
   }
   printf("%d", s);

   return 0;
}