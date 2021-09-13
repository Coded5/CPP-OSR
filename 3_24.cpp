#include <stdio.h>

int main() {
   int x, y;
   scanf("%d", &x);
   scanf("%d", &y);
   
   if(y < x) {
      printf("error\n");
      return 0;
   }

   for(int i = x; i <= y; i++) {
      printf("%d\n", i);
   }
   return 0;
}