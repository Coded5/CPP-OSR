#include <stdio.h>
#include <math.h>

bool isInt(float n) {
   return floor(n) == n;
}

float clamp(int val, int max) {
   if(val > max) return max;
   else return val;
}

float proper_round(float value) {
   float decimal = 10 * (value - floor(value));
   if(decimal >= 5) {
      return ceil(value);
   }
   else {
      return floor(value);
   }
}

int main() {
   int distance, time, p_error;
   scanf("%d %d %d", &distance, &time, &p_error);

   //calculate distance price
   float distance_price = 35;
   if(distance >= 2 ) distance_price += (clamp(distance - 1 , 11) * 5);
   if(distance >= 13) distance_price += (clamp(distance - 12, 8)  * 5.5);
   if(distance >= 21) distance_price += (clamp(distance - 20, 20) * 6);
   if(distance >= 41) distance_price += (clamp(distance - 40, 20) * 6.5);
   if(distance >= 61) distance_price += (clamp(distance - 60, 20) * 7.5);
   if(distance > 80 ) distance_price += (     (distance - 80)     * 8.5);

   //rounding distance price
   //printf("Distance price before rounding : %f\n", distance_price);
   if(isInt(distance_price)) {
      if(int(distance_price) % 2 == 0) distance_price--;
   } else {
      float decimal = 10 * (distance_price - floor(distance_price));
      if(decimal >= 5) {
         distance_price = ceil(distance_price);
         if(int(distance_price) & 2 == 0) distance_price++;
      }
      else {
         distance_price = floor(distance_price);
         if(int(distance_price) & 2 == 0) distance_price++;
      }
   }

   float time_price = 0;
   if(time > 1) time_price = 1.5 * time;
   //printf("Time price before round : %f\n" , time_price);
   if(int(floor(time_price)) % 2 == 1) time_price--;

   float total = (distance_price + time_price) * (float(p_error + 100) / 100);
   
   float k = total / 3;
   float perth = 2 * floor(k);
   float remain = (2*k) - perth;
   float ice = ceil(k) + floor(remain);
   printf("%.0f\n", total);
   printf("%.0f\n", perth);
   printf("%.0f\n", ice);
   

   return 0;
}