cmake_minimum_required(VERSION 3.15)
project(sort C)

set(CMAKE_C_STANDARD 11)

add_executable(sort main.c sort.c sort.h quickSort.c quickSort.h swap.c swap.h bubblesort.c bubblesort.h mergeSort.c mergeSort.h introSort.c introSort.h partition.c partition.h heapSort.c heapSort.h)