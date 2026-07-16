#include<stdio.h>

void happybday(char name[], int age){
    printf("\n Happy birthday to you! ");
    printf("\n Happy birthday to you! ");
    printf("\n Happy birthday dear %s", name);
    printf("\n Happy birthday to you! ");
    printf("\n You are %d years old\n", age);
}
//functions -- write and resuse the code
    // use () to call it

    //arguements -- what you send to a function need matching parameters

int main(){
    char name[] = "";
    int age = 0;
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter age: ");
    scanf("%d", &age);


    happybday(name, age);
    happybday(name, age);
    happybday(name, age);

    
    return 0;
}