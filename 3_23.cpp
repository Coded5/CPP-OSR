#include <stdio.h>

int main() {
   int x;
   scanf("%d", &x);
   if(x <= 0) {
      printf("error\n");
      return 0;
   }
   for(int i = 1; i <= x; i++) {
      printf("%d\n", i);
   }
   return 0;
}