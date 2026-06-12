#include <stdio.h>

int main (){

int age = 7;
float price = 9.9999;
char symbol = 'G';
char name[] = "GORAL BAJAJ";
double pie = 3.14566778;


//-4 for 4 spaces after the number add 04 for filling with 0
printf("%-4d is your age\n", age);
printf("%03d is your age\n", age);
printf("%d is your age\n", age);
printf("%2d is your age\n",age);
printf("price is %.4f\n",price);
printf("price is %.1f\n",price);
//use %.1 for rounding or whatever



printf("you symbol is %c\n",symbol);
printf("your name is %s\n",name);
printf("value of pie is %.8lf",pie);


return 0;


}