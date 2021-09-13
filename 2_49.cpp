#include <stdio.h>

int main() {
   int year, from, to;
   int conversion[7] = {
      0, -1, 543, 1122, 621, 1181, 2324
   };
   scanf("%d", &year);
   scanf("%d", &from);
   scanf("%d", &to);
   if(from < 1 || from > 7 || to < 1 || to > 7) {
      printf("error\n");
      return 0;
   }

   int current = year + conversion[from-1];
   printf("%d", current - conversion[to-1]);

   return 0;
}