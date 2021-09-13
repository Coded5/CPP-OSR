#include <stdio.h>

int most_occurred_number(int nums[], int size)
{
   int max_count = 0;
   for (int i=0; i<size; i++) {
      int count=1;
      for (int j=i+1;j<size;j++)
         if (nums[i]==nums[j])
            count++;
      if (count>max_count)
         max_count = count;
   }

   for (int i=0;i<size;i++) {
      int count=1;
      for (int j=i+1;j<size;j++)
         if (nums[i]==nums[j])
            count++;
      if (count==max_count)
         return nums[i];
   }
 }

int main() {
   int arr[5];
   scanf("%d", &arr[0]);
   scanf("%d", &arr[1]);
   scanf("%d", &arr[2]);
   scanf("%d", &arr[3]);
   scanf("%d", &arr[4]);

   int diff[4];
   for(int i = 0; i < 4; i++) {
      diff[i] = arr[i+1] - arr[i];
   }
   
   int base = diff[0];
   bool perfect = true;
   for(int i = 0; i < 4; i++) {
      if(base != diff[i]) {
         perfect = false;
         break;
      }
   }

   if(perfect) {
      printf("very good\n");
      return 0;
   }

   int slope = most_occurred_number(diff, 4);
   int offset_0 = arr[0];
   int offset_1 = arr[1];
   
   for(int i = 0; i < 4; i++) {
      int s0 = (slope * i) + offset_0;
      int s1 = (slope * (i-1)) + offset_1;
      if(arr[i] != s0) {
         printf("%d\n", i+1);
         printf("%d\n", s0);
         break;
      } else if(arr[i] != s1) {
         printf("%d\n", i+1);
         printf("%d\n", s1);
         break;
      }
   }

   return 0;
}