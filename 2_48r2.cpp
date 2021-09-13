#include <stdio.h>
#include <math.h>

bool isInteger(double x) {
   return floor(x) == x && ceil(x) == x;
}

void printAnswer(double a, double b) {
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

   double sqr = (b*b) - (4 * a * c);
   if(sqr > 0) {
      double x0 = ((-b) + sqrt(sqr)) / (2 * a);
      double x1 = ((-b) - sqrt(sqr)) / (2 * a);
      printAnswer((x0 > x1) ? x1 : x0, (x0 > x1) ? x0 : x1);
   } else if(sqr == 0) {
      double x0 = ((-b) + sqrt(sqr)) / (2 * a);
      if(isInteger(x0)) printf("x = %.0f\n", x0);
      else printf("x = %.2f\n", x0);
   } else if(sqr < 0) {
      printf("error\n");
   }
   //printAnswer((x0 > x1) ? x1 : x0, (x0 > x1) ? x0 : x1);

   return 0;
}