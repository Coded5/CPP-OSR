#include <stdio.h>
#include <math.h>
#include <string.h>

//10R,3E,4E,7R,9E,

int main() {
   int period_count, time_remove;
   char time_start[100];
   scanf("%d", &period_count);
   scanf("%d %s", &time_remove, &time_start);

   if(time_remove > 45 || time_start < 0 || time_remove < 0) {
      printf("error\n");
      return 0;
   }

   char *token = strtok(time_start, ".");
   int hour, minute;
   sscanf(token, "%d", &hour);
   token = strtok(NULL, ".");
   sscanf(token, "%d", &minute);
      
   if(minute >= 60) {
      printf("error\n");
      return 0;
   }
   for(int i = 0; i < period_count; i++) {
      if(i == 3) minute += 20;
      int new_minute = (minute + 50 - time_remove ) % 60;
      int new_hour = (((minute + 50 - time_remove ) >= 60) ? hour+1 : hour) % 24;
      printf("PERIOD : %d | %.2d.%.2d - %.2d.%.2d\n", i, hour, minute, new_hour, new_minute);
      hour = new_hour;
      minute = new_minute;
   }

   return 0;
}