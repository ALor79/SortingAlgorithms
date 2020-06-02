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
int main() {

    int numbers[]={1,2,3,4,5,15,6,6,7,7,8,9,10,14,7,9,16};
    int n=sizeof(numbers)/ sizeof(numbers[0]);
    newline(1);
    puts("intro sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    introSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("bubble sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    bubbleSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("quick sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    quickSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("merge sort:(Bottom->Up):");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    mergeSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("merge sort(Top->Down):");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    TopDownMergeSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("heap sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    heapSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("insertion sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    insertionSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    puts("tim sort:");
    randomiseArray(n,numbers);
    printArray(n,numbers);
    newline(1);
    timSort(numbers,n);
    printArray(n,numbers);
    newline(2);

    return 0;
}
