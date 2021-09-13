#include <stdio.h>
#include <map>

int main() {
   int arr[4];
   scanf("%d", &arr[0]);
   scanf("%d", &arr[1]);
   scanf("%d", &arr[2]);
   scanf("%d", &arr[3]);

   int zero;
   for(int i = 0; i < 4; i++) {
      if(arr[i] == 0) { zero = i; break; }
   }

   if(zero == 0) {
      int slope = arr[3] - arr[2];
      printf("%d", arr[1] - slope);
   } else if(zero == 3) {
      int slope = arr[1] - arr[0];
      printf("%d", arr[2] + slope);   
   } else {
      printf("%d", (arr[zero+1] + arr[zero-1]) / 2);
   }

   return 0;
}

//1 2 0 4
//0.5  