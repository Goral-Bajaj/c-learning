#include<stdio.h>
//modify or combine boolean expressions
/* && --- and
   || --- or
   !  --- not
*/
int main(){
float temp = 0.0f;
printf("Enter the temperature: ");
scanf("%f", &temp);

if (temp>=20 && temp<=35){printf("It is normal temperature");}
else if (temp<20 || temp>35){printf("It is bad temperature");}


int rain = 0;
printf("Is it raining? (1=yes, 0=no): ");
scanf(" %d", &rain);
if (!rain){printf("You can go outside");}
else {printf("You cant go outside");}
return 0;
}