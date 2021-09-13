#include <stdio.h>
#include <math.h>

int main() {
   int n;
   scanf("%d", &n);

   printf("error %d\n", n);
   if(n < 0) {
      printf("error %d\n", n);
      return 0;
   }

   if(n == 0) {
      printf("0\n");
      return 0;
   }

   //A >= 1

   int l = floor(log10(n));
   int r = floor(n / (pow(10, l)));
   printf("%d", r);

   return 0;
}