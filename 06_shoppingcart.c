//june 4

//shopping cart 

#include <stdio.h>
int main (){

printf("WELCOME TO SHOP MART");
printf("\n");
printf("We have the following items: \n");
printf("1. Pizza  (Rs 289) \n");
printf("2. Garlic bread (Rs 109)\n");
printf("3. Pasta (Rs 249) \n");
printf("\n");

printf("what would you like to have? Please enter the item number: ");

int item_number = 0;
scanf("%d", &item_number);

printf("Could you tell us the amount: ");

int amount = 0;
scanf(" %d", &amount);

int price = 0;
if (item_number == 1){price = 289;}
if (item_number == 2){price = 109;}
if (item_number == 3){price = 249;}

//took help from AI for if syntax since previously not covered
//learn to write == instead of = in if syntax
int total_cost = price*amount; 

printf("Please pay Rs %d", total_cost);

return 0;
}