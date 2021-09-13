#include <stdio.h>

int main() {
   int a,b,c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   printf("%d %d %d\n", a, b, c);
   printf("%d %d %d\n", b, c, a);
   printf("%d %d %d\n", c, a, b);
   
   return 0;
}