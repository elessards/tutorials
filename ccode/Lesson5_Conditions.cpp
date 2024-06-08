// LESSON 5
// Conditions

// import libraries
#include <stdio.h>

// ---MAIN DRIVER--- //
int main() {

    /* general form of the decision making structures */
    int target = 10;
    if (target == 10) {
    printf("Target is equal to 10\n");
    }

    /* inequality operators */
    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.\n");
    }

    if (foo > bar) {
        printf("foo is greater than bar.\n");
    }

    /* else statements */
    if (foo < bar) {
    printf("foo is smaller than bar.");
    } else {
    printf("foo is greater than bar.");
    }

    /* more than two outcomes */
    if (foo < bar) {
    printf("foo is smaller than bar.");
    } else if (foo == bar) {
    printf("foo is equal to bar.");
    } else {
    printf("foo is greater than bar.");
    }

    /* nested else if statements */
    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80) {
        if (peanuts_eaten < max_peanut_limit) {
        printf("Take as many peanuts as you want!\n");
        }
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
        printf("You can't have anymore peanuts!\n");
        }
        else {
        printf("Alright, just one more peanut.\n");
        }
    }

    /* two or more expressions for boolean */
    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.");
    }

    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.");
    }

    /* the NOT operator */
    int target = 9;
    if (target != 10) {
        printf("Target is not equal to 10");
    }

    return 0;
}