// june 18

#include <stdio.h>
#include <stdbool.h>
int main (){

float price = 10.00;
printf("The price is Rs 10.00 \n");


char discount = '\0';
printf("Do you want to apply for student or senior discount (y/n)?: ");
scanf(" %c", &discount);

if(discount == 'y' || discount == 'Y'){ 
   
    char student = '\0';
    char senior = '\0';

    printf("Are you a student(y/n)?: ");
    scanf(" %c", &student);

    printf("Are you a senior(y/n)?: ");
    scanf(" %c", &senior);


    if(student == 'y' || student == 'Y'){ 
        if(senior == 'y' || senior == 'Y'){
        printf("Student discount is 10%% and senior discount is 20%% \n Please pay Rs. %.2f \n", price*0.7);}

        else{printf("Student discount is 10%% \n Please pay Rs. %.2f \n", price*0.9);}}
        else if(senior == 'y' || senior == 'Y'){printf("Senior discount is 20%% \n Please pay Rs %.2f", price*0.8);}



}
else {printf("Please pay Rs. 10");}



return 0;
}