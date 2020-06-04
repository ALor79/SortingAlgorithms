//
// Created by ali raz on 6/3/20.
//

#include <stdio.h>
#include "array.h"
//print array prints the array to the stdin
void printArray(int arraySize, int arr[])
{

    for (size_t i = 0; i < arraySize; i++)
    {
        printf("%d\t", arr[i]);
    }

}
void newline(size_t x){
    for (size_t i = 0; i < x; ++i) {
        puts("");
    }
}
void printArrow(unsigned int n){
    newline(1);
    for (unsigned int i = 0; i < n; ++i)
        printf("|\t");
    newline(1);
    for (unsigned int i = 0; i < n; ++i)
        printf("V\t");
    newline(1);
}
void printSortFunction(int *arr,int n, void (function)(int *,int)){
    randomiseArray(n,arr);
    printArray(n,arr);
    printArrow(n);
    function(arr,n);
    printArray(n,arr);
    newline(2);
}