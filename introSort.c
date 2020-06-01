//
// Created by ali raz on 6/1/20.
//
#include <math.h>
#include "partition.h"
#include "heapSort.h"
int maxDepth(int length){
    return log(length)* 2;
}
void introSort(int array[],int begin,int length,int maxDepth)
{


    if (length<1) {
        return;
    }else if (maxDepth == 0) {
        heapSort(array,length);
    }else {
        if (begin < length) {
            int partition_border = partition(array, begin,length);  // assume this function does pivot selection
            introSort(array, begin, partition_border - 1, maxDepth - 1);
            introSort(array, partition_border + 1, length, maxDepth - 1);
        }
    }
}