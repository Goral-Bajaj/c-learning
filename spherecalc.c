#include <stdio.h>
#include <math.h>

int main(){

printf("WELCOME TO SPHERE CALCULATOR\n");

float x = 0.0f;

printf("Please enter the radius: ");
scanf(" %f", &x);

printf("Area: %.2f\n", 4*3.14*pow(x,2));
printf("Volume: %.2f\n", 4/3*3.14*pow(x,3));
//wrote 4/3 for volume decimal gets dropped

printf("Corrected Volume: %.2f\n", (4.0f/3.0f)*3.14*pow(x,3));

return 0;
}