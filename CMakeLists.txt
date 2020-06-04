cmake_minimum_required(VERSION 3.15)
project(sort C)

set(CMAKE_C_STANDARD 99)

add_executable(sort main.c sort.h quickSort.c quickSort.h swap.c swap.h bubbleSort.c bubbleSort.h mergeSort.c mergeSort.h introSort.c introSort.h partition.c partition.h heapSort.c heapSort.h insertionSort.c insertionSort.h timSort.c timSort.h selectionSort.c selectionSort.h shellSort.c shellSort.h treeSort.c treeSort.h myPrinter.c myPrinter.h array.c array.h)