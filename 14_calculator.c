#include<stdio.h>
int main (){

printf("WELCOME TO CALCULATOR\n");
float num1 = 0.0f;
float num2 = 0.0f;

printf("Enter num1: ");
scanf("%f", &num1);

printf("Enter num2: ");
scanf(" %f", &num2);

char operator = '\0';
printf("select operator +,-,/,*: ");
scanf(" %c", &operator);

switch(operator){
case '+':  printf("Result is %.3f", num1+num2);
break;
case '-': printf("Result is %.3f", num1-num2);
break;
case '*': printf("Result is %.3f", num1*num2);
break;
case '/':
if(num2 == 0){printf("CANT DIVIDE BY 0\n");}
else{printf("Result is %.3f", num1/num2);}
break;
default: printf("Please enter valid operator");


}
    return 0;
}