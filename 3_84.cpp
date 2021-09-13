#include <stdio.h>

bool isPrime(int n) {
   if(n == 1 || n == 0) {
      return false;
   }

   int i = 2;
   while(i*i <= n) {
      if(n % i == 0) {
         return false;
      }
      i++;
   }

   return true;
}

int main() {
   int x;
   scanf("%d", &x);

   if(x > 100 || x == 0) {
      printf("not have\n");
      return 0;
   }

   int i = 1;
   while(1) {
      int curr = x * i;
      if(curr > 100) {
         break;
      }

      if(i == 1) {
         printf("%d\n", curr);
      } else {
         printf("%d\n", curr);
      }
      
      
      i++;
   }
   
   return 0;
}