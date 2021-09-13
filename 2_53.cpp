#include <stdio.h>

int main() {
   int arr[5];
   scanf("%d", &arr[0]);
   scanf("%d", &arr[1]);
   scanf("%d", &arr[2]);
   scanf("%d", &arr[3]);
   scanf("%d", &arr[4]);

   int min = arr[0];
   int max = arr[0];
   for(int i = 0; i < 5; i++) {
      if(arr[i] > max) max = arr[i];
      if(arr[i] < min) min = arr[i];
   }

   if(min == max) {
      printf("perfect\n");
      return 0;
   } 

   printf("%d\n", min);
   printf("%d\n", max);

   return 0;
}