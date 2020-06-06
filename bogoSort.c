//
// Created by ali raz on 6/4/20.
//




#include <zconf.h>
#include "bogoSort.h"
bool isSorted(int arr[], int n){
    for (int i = 0; i < n; ++i) {
        if ( arr[i] > arr[i+1] )
            return false;
    }
    return true;
}


bool bogoSort(int *arr, int length){
    for (size_t i = 0; i < 1000000; ++i) {
        if (isSorted(arr, length))
            return true;
        else
            randomiseArray(length,arr);
    }
    return false;
    

}