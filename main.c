#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc50-cpp"
#include <stdio.h>
#include "sort.h"
#include "myPrinter.h"

int main() {

    int numbers[]={1,2,3,4,5,15,6,6,17,7,8,9,10,14,19,9,16,3,5,12,13,2};
    int n=sizeof(numbers)/ sizeof(numbers[0]);
    newline(1);
    puts("intro sort:");
    printSortFunction(numbers,n,introSort);

    puts("bubble sort:");
    printSortFunction(numbers,n,introSort);

    puts("quick sort:");
    printSortFunction(numbers,n,quickSort);

    puts("merge sort:(Bottom->Up):");
    printSortFunction(numbers,n,mergeSort);

    puts("merge sort(Top->Down):");
    printSortFunction(numbers,n,TopDownMergeSort);

    puts("heap sort:");
    printSortFunction(numbers,n,heapSort);

    puts("insertion sort:");
    printSortFunction(numbers,n,insertionSort);

    puts("tim sort:");
    printSortFunction(numbers,n,timSort);

    puts("selection sort:");
    printSortFunction(numbers,n,selectionSort);

    puts("shell sort:");
    printSortFunction(numbers,n,shellSort);

    puts("tree sort:");
    printSortFunction(numbers,n,treeSort);

//    puts("intro sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    introSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("bubble sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    bubbleSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("quick sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    quickSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("merge sort:(Bottom->Up):");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    mergeSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("merge sort(Top->Down):");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    TopDownMergeSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("heap sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    heapSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("insertion sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    insertionSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("tim sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    timSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("selection sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    selectionSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("shell sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    shellSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);
//
//    puts("tree sort:");
//    randomiseArray(n,numbers);
//    printArray(n,numbers);
//    printArrow();
//    treeSort(numbers,n);
//    printArray(n,numbers);
//    newline(2);

    return 0;
}

#pragma clang diagnostic pop