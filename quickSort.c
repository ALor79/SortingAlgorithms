//
// Created by ali raz on 6/1/20.
//
#include "partition.h"

void quicksort(int array[], int begin, int end) {

    if (begin < end) {
        int partition_border = partition(array, begin, end);
        quicksort(array, begin, partition_border-1);
        quicksort(array, partition_border + 1, end);
    }

}
void quickSort(int array[], int length){
    quicksort(array,0,length-1);
}