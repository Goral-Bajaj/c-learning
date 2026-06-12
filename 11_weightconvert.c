//10 june

#include <stdio.h>
int main (){
printf("WELCOME TO WEIGHT CONVERTER\n");
printf("\n");   
printf("We have the following choices: \n");
printf("1. Pounds to kgs\n");
printf("2. Kgs to pounds\n");
   
int choice = 0;
printf("Please tell which choice: ");
scanf("%d", &choice);    

float weight = 0.0f;
printf("\n");
if (choice == 1){
    printf("Enter weight in pounds: ");
    scanf("%f", &weight);
    printf("Your weight is %.2f kgs \n", weight*0.45 );}

    else if (choice == 2){printf("Enter weight in kgs: ");
        scanf("%f", &weight);
        printf("Your weight is %.2f pounds \n", weight*2.2); }
        // learnt from ai to write else if user enter anything else

        else {printf("INVALID CHOICE please restart program and select 1 or 2 \n");}

        printf("1. Pounds to Kgs\n2. Kgs to Pounds\nChoice: ");
    return 0;
}