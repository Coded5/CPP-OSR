#include <stdio.h>

int main() {
   const char *colors[7] = {
      "red", "green", "yellow", "pink", "white", "blue", "orange"
   };

   int current, offset;
   scanf("%d", &current);
   scanf("%d", &offset);

   printf("%s", colors[((current + offset) % 7) - 1]);

   return 0;
}