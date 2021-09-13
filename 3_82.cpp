#include <stdio.h>
#include <math.h>

/*
0 - saturday
1 - sunday
2 - monday
3 - tuesday
4 - wednesday
5 - thursday
6 - friday
*/

int main() {
   const char *dates[7] = {
      "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
   };

   const int dayInMonth[12] = {
      31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
   };
   
   int year, month, day;
   scanf("%d", &year);
   scanf("%d", &month);
   scanf("%d", &day);

   if(year <= 0 || month < 1 || month > 12) {
      printf("error\n");
      return 0;
   }

   if(day <= 0 || day > dayInMonth[month-1]) {
      if(year % 4 != 0 || day > 29) {
         printf("error\n");
         return 0;
      }
   }

   int days = year * 365.25;
   for(int i = 0; i < month-1; i++) {
      days += dayInMonth[i];
   }
   days += (day);

   printf("%s\n", dates[(days - 2) % 7]);

   return 0;
}