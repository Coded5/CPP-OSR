#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   if(n <= 1 || n >= 18) {
      printf("T_T\n");
      return 0;
   }

   //3
   //w = 5
   int h = (2 * n) - 3;
   int half = (h - 1) / 2;

   for(int i = 0; i < n-1; i++) printf(" ");
   for(int i = 0; i < n; i++) printf("*");
   printf("\n");
   
   for(int i = 0; i < half; i++) {
      int w = n + (2*i) + 2;
      int m = half-i;
      for(int j = 0; j < m; j++) printf(" ");
      for(int j = 0; j < w; j++) printf("%s", (j == 0 || j == w-1) ? "*" : " ");
      printf("\n");
   }

   //middle
   int widest = n + h - 1;
   for(int i = 0; i < widest+2; i++) printf("%s", (i == 0 || i == widest+1) ? "*" : " ");
   printf("\n");

   for(int i = half-1; i >= 0; i--) {
      int w = n + (2*i) + 2;
      int m = half-i;
      for(int j = 0; j < m; j++) printf(" ");
      for(int j = 0; j < w; j++) printf("%s", (j == 0 || j == w-1) ? "*" : " ");
      printf("\n");
   }

   for(int i = 0; i < n-1; i++) printf(" ");
   for(int i = 0; i < n; i++) printf("*");

   return 0;
}
/*
  ***
 *   *
*     *
 *   *
  ***
  */