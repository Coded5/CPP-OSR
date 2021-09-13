#include <stdio.h>
#include <math.h>

int main() {
   int money_stack[8] = {
      1000, 500, 100, 50, 20, 10, 5, 1
   };

   int total;
   scanf("%d", &total);

   int money[8] = {0};
   for(int i = 0; i < 8; i++) {
      if(money_stack[i] > total) continue;
      money[i] = floor(total / money_stack[i]);
      total -= money[i] * money_stack[i];
      if(total <= 0) {
         break;
      }
   }

   for(int i = 0; i < 8; i++) {
      printf("%d\n", money[i]);
   }

   return 0;
}