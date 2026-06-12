#include <stdio.h>
// for boolean following command true =1 false =0

#include <stdbool.h>

int main(){
   
    float age = 2.5;
    int year = 2026;
    int quantity = 2;
    char grade = 'A';

    //for float type %f and for whole number or integer %d
    //to reduce decimal add %.1f or .2f
    // use "double" for 15-16 decimal places--- %lf (long float)
    //use '.' when working with char

    printf("you are %.1f years old\n",age);
    printf("the year is %d\n",year);
    printf("the quantity is %d\n",quantity);
    printf("your grade is %c\n",grade);

    //more than 1 character char --- [] = "" (%s [string])

    char name[] = "GORAL BAJAJ";

    printf("your name is %s\n",name);

    bool isOnline = false;
    printf("%d is online\n",isOnline);

    return 0;
}