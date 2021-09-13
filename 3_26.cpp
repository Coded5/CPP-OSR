#include <stdio.h>
#include <math.h>

int main() {
   int a, b;
   scanf("%d", &a);
   scanf("%d", &b);

   if(a == 0) {
      printf("error\n");
      return 0;
   }

   int r = pow(a, b);
   printf("%d power %d = %d", a, b, r);

   return 0;
}