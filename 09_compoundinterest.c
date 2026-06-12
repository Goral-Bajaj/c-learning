//7 june

#include <stdio.h>
#include <math.h>

int main (){

printf("WELCOME TO COMPOUND INTEREST CALCULATOR \n");

float p = 0.0f;
float r = 0.0f;
float n = 0.0f;
float t = 0.0f;

printf("Enter principal amount Rs: ");
scanf("%f", &p);

printf("Enter rate of interest %: ");
scanf("%f", &r);

printf("Enter number of times yearly compounded: ");
scanf("%f", &n);

printf("Enter time period (years): ");
scanf("%f", &t);

printf("The total after %f years is Rs %.2f", t,p*pow(1+r/100*1.0/n, n*t));
    return 0;
}