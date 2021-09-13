#include <stdio.h>

int main() {
   float price;
   scanf("%f", &price);
   if(price < 0) {
      printf("error\n");
      return 0;
   }

   float discounted = 0;

   if(price >= 0 && price <= 999) discounted = 0;
   else if(price >= 1000 && price <= 4999) discounted = price * 0.1;
   else if(price >= 5000 && price <= 6999) discounted = price * 0.2;
   else if(price >= 7000 && price <= 9999) discounted = price * 0.25;
   else if(price >= 10000 && price <= 19999) discounted = price * 0.3;
   else if(price >= 20000) discounted = price * 0.4;

   printf("%.2f\n", price);
   printf("%.2f\n", discounted);
   printf("%.2f\n", price - discounted);

   return 0;
}