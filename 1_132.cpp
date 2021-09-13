#include <stdio.h>
// #include <math.h>

// int getDigit(int a, int i) {
//    int length = floor(log10(a));
//    int front = floor(a / (pow(10, length-i)));
//    int back = 10*floor(a / (pow(10, length+1-i)));
//    return front-back;
// }

int main() {
   char a[3];
   char b[3];
   char c[3];
   scanf("%3s", &a);
   scanf("%3s", &b);
   scanf("%3s", &c);
   printf("%c%c%c\n", a[0], b[0], c[0]);
   printf("%c%c%c\n", a[1], b[1], c[1]);
   printf("%c%c%c\n", a[2], b[2], c[2]);
   
   return 0;
}