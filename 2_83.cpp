#include <stdio.h>
#include <math.h>

int getDigit(int val, int pos) {
   int length = floor(log10(val));
   int front = floor(val / (pow(10, length-pos)));
   int back = 10*floor(val / (pow(10, length+1-pos)));
   return front-back;
}

int main() {
   int a;
   scanf("%d", &a);
   
   if(a < 0 || a >= 1000) {
      printf("error\n");
      return 0;
   }

   int length = floor(log10(a) + 1);
   for(int i = 2; i >= 0; i--) {
      int num = ceil(pow(10, i));
      printf("%d\n", getDigit(a, length - i - 1) * num);
   }
   
   return 0;
}