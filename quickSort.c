//
// Created by ali raz on 6/1/20.
//
#include "partition.h"
void quickSort(int array[], int begin, int end) {

    if (begin < end) {
        int partition_border = partition(array, begin, end);
        quickSort(array, begin, partition_border-1);
        quickSort(array, partition_border + 1, end);
    }

}
