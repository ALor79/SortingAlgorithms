#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc50-cpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "swap.h"
//randomiseArray should randomly mix the order of elements in an array
void randomiseArray(int arraySize, int arr[])
{
    static int Randomer=0;
    //giving rand a seed using time
    srand(time(NULL)+Randomer++);
    //we swap every value with a random index(it can be it self)
    for (size_t i = 0; i < arraySize; i++)
    {
        //getting a random index
        int random = rand() % arraySize;
        //swaping algorithm
        swap(&arr[i],&arr[random]);
    }
}
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
void printArrow(){
    puts("\n|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t|\t");
    puts("V\tV\tV\tV\tV\tV\tV\tV\tV\tV\tV\tV\tV\tV\tV\tV\tV\t");
}
int main() {

    int numbers[]={1,2,3,4,5,15,6,6,17,7,8,9,10,14,7,9,16};
    int n=sizeof(numbers)/ sizeof(numbers[0]);
    newline(1);
    puts("intro sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    introSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("bubble sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    bubbleSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("quick sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    quickSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("merge sort:(Bottom->Up):");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    mergeSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("merge sort(Top->Down):");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    TopDownMergeSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("heap sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    heapSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("insertion sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    insertionSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("tim sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    timSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("selection sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    selectionSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("shell sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    printArrow();
    shellSort(numbers,n);
    printArray(n,numbers);
    newline(2);
    return 0;
}

#pragma clang diagnostic pop