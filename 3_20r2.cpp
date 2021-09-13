#include <stdio.h>
#include <string>

int main() {
   std::string n;
   char q[1];
   scanf("%s", &n);
   scanf("%s", &q);

   for(int i = 0; i < n.length(); i++) {
      printf("%c", n.at(i));
   }

   return 0;
}