//
// Created by ali raz on 6/1/20.
//
#include "swap.h"
void bubbleSort(int arr[],int length) {

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            if (arr[i]<arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}
