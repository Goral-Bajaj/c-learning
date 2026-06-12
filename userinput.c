#include <stdio.h>
#include <string.h>

int main(){

int age = 0;
float gpa = 0.0f;
//0.0f to indicate its a float value no need to put for a double 
char grade = '\0';
//  /0 is a null terminator to remove any previous input
char name [30] = "";
//for no input we need to speicfy length ie 30 bytes

printf("Enter your age: ");
scanf("%d", &age);
// & is adress of operator (so at the adress of age)
printf("your age is %d \n", age);

printf("\n");


printf("Enter your cgpa: ");
scanf(" %f", &gpa);    //cant put \n inside scanf
// leaving space before %_ cleans the input buffer
printf("your gpa is %.2f \n", gpa);

printf("\n");

printf("What is your grade? ");
scanf(" %c", &grade);
printf("your grade is %c \n", grade);

printf("\n");

printf("enter your first name: ");
scanf("%s", &name);
printf("your first name is %s \n", name);

printf("\n");

//FOR FULL NAME
// string is a little complicated you use fgets (file get string [in a string it doesn't read the space])


getchar();
printf("Enter full name: ");
fgets(name, sizeof(name), stdin);
//getchar() to remove buffer sizeof(name) to specify bytes in name so dont need to write manually

/*Now to remove the buffer if our printf statments were togther we need to include STRING.H as it reads the enter and misses a line*/
name[strlen(name) -1] = '\0';

//stringlegth of names = -1 and then null terminator


printf("%s \n", name);
printf("%d \n", age);
printf("%.2f \n", gpa);
printf("%c \n", grade);


return 0;


}