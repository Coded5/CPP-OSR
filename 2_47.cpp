#include <stdio.h>

int main() {
   int x;
   scanf("%d", &x);
   printf("%d\n", x - 543);
   printf("%s\n", ((x - 543) % 4 == 0) ? "YES" : "NO");
   return 0;
}