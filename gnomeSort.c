//
// Created by ali raz on 6/6/20.
//


#include "swap.h"
void gnomeSort(int arr[], int length)
{
    int i = 0;

    while (i < length) {
        if (i == 0)
            i++;
        if (arr[i] >= arr[i - 1])
            i++;
        else {
            swap(&arr[i], &arr[i - 1]);
            i--;
        }
    }
}