//
// Created by ali raz on 6/1/20.
//

#include "swap.h"
void insertionSort(int array[], int length) {
    int i = 1;
    while (length > i) {
        int j = i;
        while (j > 0 && array[j - 1] > array[j]) {
            swap(&array[j], &array[j - 1]);
            j--;
        }
        i++;
    }

}