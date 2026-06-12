//june 8

//else if statments can be added as many times
//order matters
#include <string.h>
#include <stdio.h>
int main (){

int age = 0;

    printf("Enter your age: ");
scanf("%d", &age);

if (age >= 65){printf("You are a senior citizen\n");}
else if (age >= 18){printf("You are an adult\n");}
else if (age == 0){printf("You are newborn\n");}
else if (age < 0){printf("You are not born yet\n");}
else {printf("You are a child\n");}

//can be used to check if input is given
printf("\n");
char name[50] = "";
getchar();
printf("Enter you name: ");
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0';

if (strlen(name) == 0){printf("You did not enter name");}
else {printf("Hello %s", name);}
    return 0;
}