#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {
   int arr[5];
   scanf("%d", &arr[0]);
   scanf("%d", &arr[1]);
   scanf("%d", &arr[2]);
   scanf("%d", &arr[3]);
   scanf("%d", &arr[4]);

   std::vector<int> diff;
   int slope;
   for(int i = 0; i < 4; i++) {
      int d = arr[i+1] - arr[i];
      if(std::find(diff.begin(), diff.end(), d) != diff.end()) {
         slope = d;
         break;
      }
      diff.push_back(d);
   }

   printf("%d", slope);
   for(int i = 0; i < 4; i++) {
      int y = (slope * i) + arr[0];
   }

   return 0;
}