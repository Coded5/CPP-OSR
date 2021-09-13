#include <stdio.h>

int main() {
   const char *months[12] = {
      "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"
   };

   int n;
   scanf("%d", &n);

   if(n <= 0 || n > 12) {
      printf("error\n");
      return 0;
   }

   printf("%s", months[n-1]);

   return 0;
}