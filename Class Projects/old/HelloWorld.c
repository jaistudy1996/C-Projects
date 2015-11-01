/* Name: Jayant Arora */
/* Hello World program */

#include<stdio.h>
#include <string.h>

int power(int base, int n) {
    int i, p;

    p = 1;

    for ( i = 1 ; i <=base ; i++ ) {
       p = p * n;

    }

    return p;

}


void someTypeCast() {
    int xInt = 1;
    int yInt = 4;

    long xLong = 9876543210;

    printf("Cast1-[%ld]\n", xLong);

    long xIntnew2 = (long)xInt;
    xIntnew2 = xLong;
    printf("Cast2-[%ld]\n", xIntnew2);


    unsigned int xUnsignedInt = 3000000000;
    printf("Cast3-[%u]\n", xUnsignedInt);


    xInt = 1;
    yInt = 2; 
    printf("Cast4-[%f]\n", (float)1/4);
    printf("Cast5-[%f]\n", (float)xInt/yInt);

    float aFloat = 5000000000;
    printf("Cast5-[%10.0f]\n", aFloat);

    float xIntnew = (float)xInt;
    xIntnew = aFloat;
    printf("Cast6-[%f]\n", xIntnew);

    xLong = aFloat;
    printf("Cast7-[%f]\n", (float)xLong);

}

int main ( int arc, char **argv ) {
  

    printf("Hello World\n\n");

    someTypeCast();
    printf("\n"); 

    printf("power:%d\n", power(2,3) );

}

