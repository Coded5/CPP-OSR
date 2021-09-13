#include <stdio.h>
#include <math.h>

int getDigit(int val, int pos) {
   int length = floor(log10(val));
   int front = floor(val / (pow(10, length-pos)));
   int back = 10*floor(val / (pow(10, length+1-pos)));
   return front-back;
}

int main() {
   int num;
   scanf("%d", &num);
   if(num < 10 || num > 9999) {
      printf("error\n");
      return 0;
   }

   int length = floor(log10(num));
   for(int i = length; i >= 0; i--) {
      printf("%d", getDigit(num, i));
   }
   return 0;
}