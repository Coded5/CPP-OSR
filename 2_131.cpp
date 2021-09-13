#include <stdio.h>

//flawed problem

int main() {
   float age, mass, height;
   scanf("%f", &age);
   scanf("%f", &mass);
   scanf("%f", &height);
   
   float bmi = mass / ((height * height) / 10000);

   if(age >= 10 && age <= 25) {
      if(bmi >= 35) printf("teen fat\n");
      else if(bmi >= 18) printf("teen OK\n");
      else printf("teen thin\n");
   } else if(age >= 26 && age <= 50) {
      if(bmi >= 33) printf("working fat\n");
      else if(bmi >= 19) printf("working OK\n");
      else printf("working thin\n");
   } else if(age >= 51) {
      if(bmi >= 30) printf("old fat\n");
      else if(bmi >= 20) printf("old OK\n");
      else printf("old thin\n");
   }

   return 0;
}