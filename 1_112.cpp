#include <stdio.h>

int main() {
   float a, b;
   scanf("%f", &a);
   scanf("%f", &b);
   if(b == 0) {
      printf("error\n");
      return 0;
   }
   printf("%.2f\n", a/b);
   return 0;
}