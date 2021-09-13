#include <stdio.h>

int main() {
   int votes[6] = {0};
   while(1) {
      int id;
      scanf("%d", &id);
      if(id == 0) break;
      votes[id-1]++;
   }

   int max = 0;
   for(int i = 0; i < 6; i++) {
      if(votes[i] > max) {
         max = votes[i];
      }
   }

   for(int i = 0; i < 6; i++) {
      if(votes[i] == max) {
         printf("%d ", i+1);
      }
   }

   return 0;
}