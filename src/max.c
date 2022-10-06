#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    assert(size > 0); /* Precondition */
    int max = numbers[0]; /* Max value in numbers, initialised as the first element in the array */

    /* Loop counting through the array until reaching size */
    for(int i = 0; i < size; i++){
        /* When the if-statement is true, max gets assigned the largest element */
        if(numbers[i] > max)
        max = numbers[i];
  }
    return max;
}
