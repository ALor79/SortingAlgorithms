//
// Created by ali raz on 6/3/20.
//

#include "array.h"
#include "time.h"
#include "stdlib.h"
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