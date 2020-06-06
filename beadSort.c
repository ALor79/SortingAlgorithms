

//code take from https://github.com/TheAlgorithms/C/blob/master/sorting/Bead_Sort.c
#include <stdlib.h>
void beadSort(int *a, int length)
{
    int i, j, max, sum;
    unsigned char *beads;
#	define BEAD(i, j) beads[i * max + j]

    for (i = 1, max = a[0]; i < length; i++)
        if (a[i] > max) max = a[i];

    beads = calloc(1, max * length);

    /* mark the beads */
    for (i = 0; i < length; i++)
        for (j = 0; j < a[i]; j++)
            BEAD(i, j) = 1;

    for (j = 0; j < max; j++) {
        /* count how many beads are on each post */
        for (sum = i = 0; i < length; i++) {
            sum += BEAD(i, j);
            BEAD(i, j) = 0;
        }
        /* mark bottom sum beads */
        for (i = length - sum; i < length; i++) BEAD(i, j) = 1;
    }

    for (i = 0; i < length; i++) {
        for (j = 0; j < max && BEAD(i, j); j++);
        a[i] = j;
    }
    free(beads);
}