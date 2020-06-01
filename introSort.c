//
// Created by ali raz on 6/1/20.
//
#include <math.h>
#include "partition.h"
#include "heapSort.h"
int maxDepth(int length){
    return (int) log(length)* 2;
}
void introsort(int array[],int begin,int length,int maxDepth)
{


    if (length<1) {
        return;
    }else if (maxDepth == 0) {
        heapSort(array,length);
    }else {
        if (begin < length) {
            int partition_border = partition(array, begin,length);  // assume this function does pivot selection
            introsort(array, begin, partition_border - 1, maxDepth - 1);
            introsort(array, partition_border + 1, length, maxDepth - 1);
        }
    }
}
void introSort(int array[],int length){
    introsort(array,0,length-1,maxDepth(length));
}