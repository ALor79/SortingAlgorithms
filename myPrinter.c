//
// Created by ali raz on 6/3/20.
//

#include <stdio.h>
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