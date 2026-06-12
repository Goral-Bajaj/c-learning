#include <stdio.h>

int main(){

    //arithmetic variables =+,-,*,/,%,++,--

    //dividing by integer wont give a decimal answer so both should be float

    // % is used for remainder (modulus operator)

    // ++,-- for increment and decrement

    /*augmented assigment opperators
        x=x+2 ---- x+=2
        x=x/2 ---- x/=2*/

        int x = 2;
        float y = 5;
        float z = 0;
        float k = 0;

        z=x+y;
        k=z/y;

        printf("%f\n", z);
        printf("%f\n", k);

return 0;


}