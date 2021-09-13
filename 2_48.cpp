#include <stdio.h>
#include <math.h>

bool isInteger(float x) {
   return floor(x) == x && ceil(x) == x;
}

void printAnswer(float a, float b) {
   printf("x = ");
   if(isInteger(a)) printf("%.0f", a);
   else printf("%.2f", a);

   if(isInteger(b)) printf(", %.0f\n", b);
   else printf(", %.2f\n", b);
}

int main() {
   int a, b, c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   float sqr = (b*b) - (4 * a * c);
   if(sqr < 0) {
      printf("error\n");
      return 0;
   }

   float x0 = ((-b) + sqrt(sqr)) / (2 * a);
   float x1 = ((-b) - sqrt(sqr)) / (2 * a);

   if(x0 == x1) {
      if(isInteger(x0)) printf("x = %.0f\n", x0);
      else printf("x = %.2f\n", x0);
      return 0;
   }

   printAnswer((x0 > x1) ? x1 : x0, (x0 > x1) ? x0 : x1);

   return 0;
}