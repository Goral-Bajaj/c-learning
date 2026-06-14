// june 14

#include <stdio.h>
//for multiple if-else statments use switches (integer or char)
int main (){
int dayofweek = 0;
printf("Enter day of week (1-7): ");
scanf("%d", &dayofweek);

switch(dayofweek){
case 1: printf("It is Monday");
break;
case 2: printf("It is Tuesday");
break;
case 3: printf("It is Wednesday");
break;
case 4: printf("It is Thursday");
break;
case 5: printf("It is Friday");
break;
case 6: printf("It is Saturday");
break;
case 7: printf("It is Sunday");
break;
default: printf("Please enter number (1-7)"); }

printf("\n");
printf("\n");
char dayoftheweek = '\0';
printf("Enter char (M,T): ");
scanf(" %c", &dayoftheweek);

switch(dayoftheweek){
    case 'M': printf("it is monday");
    break;
    case 'T': printf("It is tuesday");
    break;
    default: printf("Please enter M or T");
}


return 0;
}