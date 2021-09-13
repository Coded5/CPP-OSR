#include <stdio.h>

int main() {
   int a;
   scanf("%d", &a);
   if(a < 0 || a > 100) {
      printf("error\n");
      return 0;
   }

   if(a == 0) {
      printf("zero\n");
      return 0;
   }

   printf((a % 2 == 0) ? "even\n" : "odd\n");

   return 0;
}