// LESSON 3
// Arrays

#include <stdio.h>

int main() {

    /* define the array 'numbers' data type and size */
    int numbers[10];
    /* populate the array */
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 1;
    numbers[3] = 2;
    numbers[4] = 3;
    numbers[5] = 5;
    numbers[6] = 8;
    numbers[7] = 13;
    numbers[8] = 21;
    /* try printing the 9th value in the array */
    printf("The 10th value in the array is %d\n",numbers[8]);
    /* try printing the 10th value in the array */
    printf("The 10th value in the array is %d\n",numbers[9]);

    return 0;
}