#include <stdio.h>

int main() {
   int a, b, c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   printf("%d%d%d %d%d%d %d%d%d", a,b,c, c,a,b, b,c,a);
   return 0;
}