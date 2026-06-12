//6 june

#include <stdio.h>
#include <math.h>

int main (){

float x = 0.0f;
printf("enter x: ");
scanf("%f", &x);

x = sqrt(x);
printf("sqaure root of x is %.1f\n", x);

x = pow(x, 2);
printf("power of x twice is %.1f\n", x);

//learnt to write function inside printf statments
// when use 2 diff functions twice new variable is taken if not assigned a different variable like above

float y = 0.0f;
printf("enter y: ");
scanf("%f", &y);

printf("sqaure root of x is %.1f\n", sqrt(y));
printf("sqaure root of x is %.1f\n", pow(y, 2));


return 0;



}