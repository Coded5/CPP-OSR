#include <stdio.h>
#include <math.h>

int main() {
   int x;
   scanf("%d", &x);
   
   if(x == 0) x++;
   int length = floor(log10(x) + 1);
   printf("%d", length);

   return 0;
}