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
int main() {

    int numbers[]={13,7,8,75,6,2,48,2,36,4,5,6,7,87,9};
    int n=sizeof(numbers)/ sizeof(numbers[0]);
    quickSort(numbers,0,n-1);
    randomiseArray(n,numbers);
    introSort(numbers,0,n-1,maxDepth(n));
    for (int i = 0; i < n; ++i) {
        printf("%d\n",numbers[i]);
    }
    return 0;
}
