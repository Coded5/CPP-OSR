#include <stdio.h>
#include <math.h>

int getDigit(int val, int pos) {
   int length = floor(log10(val));
   int front = floor(val / (pow(10, length-pos)));
   int back = 10*floor(val / (pow(10, length+1-pos)));
   return front-back;
}

int main() {
   int x;
   scanf("%d", &x);

   int length = floor(log10(x) + 1);
   if(x < 0 || x > 9999999) {
      printf("error\n");
      return 0;
   }

   for(int i = 6; i >= 0; i--) {
      printf("%d\n", getDigit(x, length - i -1));
   }

   return 0;
}