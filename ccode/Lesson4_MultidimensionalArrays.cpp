// LESSON 4
// Multidimensional Arrays

// import libraries
#include <stdio.h>

// ----MAIN DRIVER--- //
int main() {

    /* general form of multidimensional array : type name[size1][size2]...[sizeN]; */

    /* Two-dimensional arrays: type arrayName[x][y]; */
    /* Example 1: vowels*/
    char vowels[2][5] = {
        {'A','E','I','O','U'},
        {'a','e','i','o','u'}
    };
    /* Example 2: 3x3 matrix of integers */
    int A[3][3] = {
        {0,1,2},        /* initializers for row indexed by 0 */
        {3,4,5},        /* initializers for row indexed by 1 */
        {6,7,8}         /* initializers for row indexed by 2 */
    };
    
    /* Accessing two-dimensional array elements */
    int num = A[1][2];

    printf("Number in array = %d\n",num);

    /* Example: grades of two students */
    int grades[5][2];   /* pre-allocate array */
    float average;      /* declare average as float */
    int i;              /* declare counter */
    int j;              /* declare counter */

    // student 1
    grades[0][0] = 66;
    grades[1][0] = 82;
    grades[2][0] = 73;
    grades[3][0] = 79;
    grades[4][0] = 88;

    // student 2
    grades[0][1] = 89;
    grades[1][1] = 85;
    grades[2][1] = 91;
    grades[3][1] = 95;
    grades[4][1] = 97;

    for (i = 0; i < 2; i++) {

        average = 0;

        for (j = 0; j < 5; j++) {

            average += grades[j][i];

        }

        average = average/5;
        printf("The average score for student %d is %f\n",i,average);

    };

    return 0;
}