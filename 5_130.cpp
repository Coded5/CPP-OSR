#include <stdio.h>

int main() {
   int r;
   int c = 1;
   scanf("%d", &r);

   //4
   if(r < 0 || r > 30) {
      printf("error\n");
      return 0;
   }

   for(int i = 0; i < r; i++) {
      for(int s = 0; s <= r-i-2; s++) {
         printf(" ");
      }

      for(int j = 0; j <= i; j++) {
         if(j == 0 || i == 0) c = 1;
         else c = (c * (i-j+1))/j;
         
         if(j == i) {
            printf("%d", c);
         } else {
            printf("%d ", c);
         }

         // if(i == r-1 && j == 0) {
         //    printf("%d", c);
         // } else {
         //    printf(" %d", c);
         // }

         // if(c <= 0) {
         //    printf("\nwhat the fuck %d %d %d\n", i, j, c);
         //    return 0;
         // }

      }
      printf("\n");
   }

   return 0;
}