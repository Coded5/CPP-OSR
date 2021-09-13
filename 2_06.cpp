#include <stdio.h>

int main() {
   int a;
   scanf("%d", &a);

   if(a < 0 || a > 100) {
      printf("error\n");
      return 0;
   }

   if(a >= 80) printf("A\n");
   else if(a >= 70 && a <= 79) printf("B\n");
   else if(a >= 60 && a <= 69) printf("C\n");
   else if(a >= 50 && a <= 59) printf("D\n");
   else printf("F\n");
   
   
   return 0;
}