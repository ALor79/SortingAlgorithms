#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc50-cpp"

#include <stdio.h>
#include "sort.h"
#include "myPrinter.h"

int main() {

    int numbers[] = {1, 2, 3, 4, 5, 15, 6, 6, 17, 7, 8, 9, 10, 14, 19, 9, 16, 3, 5, 12, 13, 2};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    newline(1);

    bool didItSort=bogoSort(numbers, n);
    if (didItSort) {
        randomiseArray(n, numbers);
        printArray(n, numbers);
        printArrow(n);
        printArray(n, numbers);
        newline(2);

    } else
        puts("bogo sort failed a million tries");

    puts("gnome sort:");
    printSortFunction(numbers, n, gnomeSort);

    puts("bead sort:");
    printSortFunction(numbers, n, beadSort);

    puts("bubble sort:");
    printSortFunction(numbers, n, introSort);

    puts("insertion sort using linked list:");
    printSortFunction(numbers, n, insertionSortUsingLinkedLists);

    puts("quick sort:");
    printSortFunction(numbers, n, quickSort);

    puts("merge sort:(Bottom->Up):");
    printSortFunction(numbers, n, mergeSort);

    puts("merge sort(Top->Down):");
    printSortFunction(numbers, n, TopDownMergeSort);

    puts("heap sort:");
    printSortFunction(numbers, n, heapSort);

    puts("insertion sort:");
    printSortFunction(numbers, n, insertionSort);

    puts("intro sort:");
    printSortFunction(numbers, n, introSort);

    puts("tim sort:");
    printSortFunction(numbers, n, timSort);

    puts("selection sort:");
    printSortFunction(numbers, n, selectionSort);

    puts("shell sort:");
    printSortFunction(numbers, n, shellSort);

    puts("tree sort:");
    printSortFunction(numbers, n, treeSort);


    return 0;
}

#pragma clang diagnostic pop