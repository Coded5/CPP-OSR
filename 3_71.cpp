#include <stdio.h>
#include <vector>

int main() {
   std::vector<int> nums;
   int count;
   scanf("%d", &count);
   for(int i = 0; i < count; i++) {
      int val;
      scanf("%d", &val);
      nums.push_back(val);
   }

   for(int i = 0; i < nums.size(); i++) {
      printf("%d\n", 2*nums[i]);
   }

   return 0;
}