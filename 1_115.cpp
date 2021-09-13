#include <stdio.h>

int main() {
   float px, py;
   float ax, ay, bx, by, cx, cy;
   scanf("%f", &ax);
   scanf("%f", &ay);
   scanf("%f", &bx);
   scanf("%f", &by);
   scanf("%f", &cx);
   scanf("%f", &cy);
   scanf("%f", &px);
   scanf("%f", &py);
   float w0 = ( ax * (cy - ay) + (py - ay) * (cx - ax) - px * (cy - ay) ) / ( (by - ay) * (cx - ax) - (bx - ax) * (cy - ay));
   float w1 = ( py - ay - w0 * (by - ay) ) / (cy - ay);
   if(w0 >= 0 && w1 >= 0 && w0 + w1 <= 1) {
      printf("yes\n");
   } else {
      printf("no\n");
   }
   return 0;
}