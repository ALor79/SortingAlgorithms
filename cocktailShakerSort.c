//
// Created by ali raz on 6/6/20.
//

#include <stdbool.h>
#include "swap.h"
/*
procedure cocktailShakerSort(A : list of sortable items) is
    do
        swapped := false
        for each i in 0 to length(A) − 2 do:
            if A[i] > A[i + 1] then // test whether the two elements are in the wrong order
                swap(A[i], A[i + 1]) // let the two elements change places
                swapped := true
            end if
        end for
        if not swapped then
            // we can exit the outer loop here if no swaps occurred.
            break do-while loop
        end if
        swapped := false
        for each i in length(A) − 2 to 0 do:
            if A[i] > A[i + 1] then
                swap(A[i], A[i + 1])
                swapped := true
            end if
        end for
    while swapped // if no elements have been swapped, then the list is sorted
end procedure
*/
void cocktailShakerSort(int arr[],int length){
    bool isSwapped;
    do{
       isSwapped=false;
        for (int i = 0; i < length-2; ++i) {
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
                isSwapped=true;
            }
        }
        if(!isSwapped){
            break;
        }
        isSwapped=false;
        for (int i = length-2; i > 0; i--) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                isSwapped = true;
            }

        }
    }while (isSwapped);

}