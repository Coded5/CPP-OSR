#include <stdio.h>
#include <math.h>
//ป้อนค่าตัวเลข 1 จำนวน เพื่อเป็นชุดตัวเลขสำหรับการค้นหา หลังจากนั้นป้อนอีก 1 ตัวเลข ที่ต้องการค้นหา ให้แสดงผลล้พธ์เป็นลำดับที่พบเป็นตัวแรกออกทางจอภาพ

long getLength(long val) {
   return floor(log10(val) + 1);
}

long getDigit(long val, long pos) {
   long length = floor(log10(val));
   long front = floor(val / (pow(10, length-pos)));
   long back = 10*floor(val / (pow(10, length+1-pos)));
   return front-back;
}

int main() {
   int n, q;
   scanf("%d", &n);
   scanf("%d", &q);

   if(q < 0 || q > 9 || n < 0) {
      printf("0 no\n");
      return 0;
   }

   //printf("%d %d %d\n", q, n, (n == q && n == 0) ? 1 : 0);

   if(n == q && n == 0) {
      printf("1\n");
      return 0;
   }

   int length = floor(log10(n)) + 1;
   for(int i = 0; i < length; i++) {
     if(getDigit(n, i) == q) {
         printf("%d", i+1);
         return 0;
      }
      
   }
   printf("%d", 0);

   return 0;
}