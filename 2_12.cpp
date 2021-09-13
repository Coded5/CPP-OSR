#include <stdio.h>
#include <math.h>

int getDigit(int val, int pos) {
   int length = floor(log10(val));
   int front = floor(val / (pow(10, length-pos)));
   int back = 10*floor(val / (pow(10, length+1-pos)));
   return front-back;
}

int main() {

   const char *numbers[10] = {
      "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
   };

   int a;
   scanf("%d", &a);
   if(a < 0 || a > 999) {
      printf("error\n");
      return 0;
   }
   int length = floor(log10(a));
   for(int i = 0; i <= length; i++) {
      int num = getDigit(a, i);
      printf("%s ", numbers[num]);
   }


   return 0;
}