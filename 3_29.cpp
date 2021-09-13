#include <stdio.h>

int main() {
   int s;
   scanf("%d", &s);

   if(s < 1 || s > 20) {
      printf("error\n");
      return 0;
   }

   for(int row = 0; row < s; row++) {
      //if(row == 0 || row == 1)
      for(int col = 0; col < s; col++) {
         printf("%s", (row == 0 || col == 0 || row == s-1 || col == s-1) ? "*" : " ");
      }
      printf("\n");
   }

   return 0;
}