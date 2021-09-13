#include <stdio.h>

int main() {
   const char *names[4] = {"DS", "SK", "AC", "BCC"};
   int counts[4];
   scanf("%d %d %d %d", &counts[0], &counts[1], &counts[2], &counts[3]);

   for(int i = 0; i < 4; i++) {
      for(int j = 0; j < counts[i]; j++) {
         printf("%s ", names[i]);
      }
   }

   return 0;
}