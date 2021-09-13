#include <stdio.h>

int main() {
   int s;
   scanf("%d", &s);

   if(s < 1 || s > 20) {
      printf("error\n");
      return 0;
   }

   for(int i = 0; i < s; i++) {
      for(int j = 0; j < s; j++) {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}