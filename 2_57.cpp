#include <stdio.h>
#include <math.h>

int main() {
   int member;
   int cakes[3];
   scanf("%d %d %d %d", &member, &cakes[0], &cakes[1], &cakes[2]);

   if(member <= 0) {
      printf("error\n");
      return 0;
   }

   int min_i = -1;
   int min = member ;

   for(int i = 0; i < 3; i++) {

      if(cakes[i] <= 0) continue;

      int leftover =  int(ceil(float(member) / float(cakes[i])) * cakes[i]) - member;

      if(leftover < min) {
         min_i = i;
         min = leftover;
      }
   }

   printf("%d\n", min_i+1);
   printf("%d\n", min);

   return 0;
}