#include <stdio.h>
#include <vector>

int main() {
   std::vector<int>vals;
   while(1) {
      int n;
      scanf("%d", &n);
      if(n < 0) break;
      vals.push_back(n);
   }

   printf("%d\n", vals.size());

   int max = 0;
   for(int i = 0; i < vals.size(); i++) {
      if(vals[i] > max) {
         max = vals[i];
      }
   }

   printf("%d\n", max);

   return 0;
}