// LESSON 2
// Variables and Types

#include <stdio.h>

int main() {

    // integers
    int a = 3;
    int b = 2;
    int c = a + b;

    printf("The sum of a and b is an integer: %d \n",c);

    // floating numbers
    float d = 3.2;
    float sum = a + d;

    printf("The sum of a and d is a floating number: %f \n",sum);

    // outputting an integer with floating number (doesnt work)
    printf("The sum of a and d as an integer: %d \n",sum);
    printf("Outputting a float as an integer does not work\n");
    return 0;

}