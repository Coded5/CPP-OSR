#include <stdio.h>
#include <math.h>

int main() {
   int n;
   scanf("%d", &n);

   int maxLength = floor(log2(n));
   bool bin[32] = { 0 };

   for(int i = 0; i < 32; i++) {
      int highestPowerOfTwo = floor(log2(n));
      n -= pow(2, highestPowerOfTwo);

      bin[highestPowerOfTwo] = true;

      if(n <= 0) {
         break;
      }
   }

   for(int i = maxLength; i >= 0; i--) {
      if(bin[i]) {
         printf("1");
      } else {
         printf("0");
      }
   }
}