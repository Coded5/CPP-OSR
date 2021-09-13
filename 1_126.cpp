#include <stdio.h>
#include <math.h>

int main() {
   int a;
   scanf("%d", &a);
   int length = floor(log10(a));
   for(int i = 0; i <= length; i++) {
      int front = floor(a / (pow(10, length-i)));
      int back = 10*floor(a / (pow(10, length+1-i)));
      printf("%d\n", front-back);
   }
   return 0;
}