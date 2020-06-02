//
// Created by ali raz on 6/2/20.
//
#include "swap.h"
#include "selectionSort.h"
void selectionSort(int array[],int length){
    /* a[0] to a[aLength-1] is the array to sort */
    int i,j;
/* advance the position through the entire array */
/*   (could do i < aLength-1 because single element is also min element) */
    for (i = 0; i < length-1; i++)
    {
        /* find the min element in the unsorted a[i .. aLength-1] */

        /* assume the min is the first element */
        int jMin = i;
        /* test against elements after i to find the smallest */
        for (j = i+1; j < length; j++)
        {
            /* if this element is less, then it is the new minimum */
            if (array[j] < array[jMin])
            {
                /* found new minimum; remember its index */
                jMin = j;
            }
        }

        if (jMin != i)
        {
            swap(&array[i], &array[jMin]);
        }
    }
}