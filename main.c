#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

//randomiseArray should randomly mix the order of elements in an array
void randomiseArray(int arraySize, int arr[])
{
    //giving rand a seed using time
    srand(time(NULL));
    //we swap every value with a random index(it can be it self)
    for (size_t i = 0; i < arraySize; i++)
    {
        //getting a random index
        int random = rand() % arraySize;
        //swaping algorithm
        int temp = arr[i];
        arr[i] = arr[random];
        arr[random] = temp;
    }
}
void printArray(int arraySize, int arr[])
{

    for (size_t i = 0; i < arraySize; i++)
    {
        printf("%d\t", arr[i]);
    }
    puts("");puts("");
}
int main() {

    int numbers[]={13,7,8,75,6,2,48,2,36,4,5,6,7,87,9};
    int n=sizeof(numbers)/ sizeof(numbers[0]);
    puts("");
    puts("intro sort:");
    randomiseArray(n,numbers);
    introSort(numbers,n);
    printArray(n,numbers);

    puts("");
    puts("bubble sort:");
    randomiseArray(n,numbers);
    bubbleSort(numbers,n);
    printArray(n,numbers);

    puts("");
    puts("quick sort:");
    randomiseArray(n,numbers);
    quickSort(numbers,n);
    printArray(n,numbers);

    puts("");
    puts("merge sort:(Bottom->Up)");
    randomiseArray(n,numbers);
    mergeSort(numbers,n);
    printArray(n,numbers);

    puts("");
    puts("merge sort(Top->Down):");
    randomiseArray(n,numbers);
    TopDownMergeSort(numbers,n);
    printArray(n,numbers);

    puts("");
    puts("heap sort:");
    randomiseArray(n,numbers);
    heapSort(numbers,n);
    printArray(n,numbers);

    return 0;
}
