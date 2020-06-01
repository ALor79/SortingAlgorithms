//
// Created by ali raz on 6/1/20.
//
#include <stdlib.h>
#include "mergeSort.h"
// Left run is A[iLeft :iRight-1].
// Right run is A[iRight:iEnd-1  ].
int *temp;
int min(int num1,int num2){
    if (num1>num2)
        return num2;
    return num1;
}
void CopyArray(int B[], int A[], int n)
{
    for(int i = 0; i < n; i++)
        A[i] = B[i];
}
// array A[] has the items to sort; array B[] is a work array
void BottomUpMerge(int A[], int iLeft, int iRight, int iEnd)
{
    int i = iLeft, j = iRight;
    // While there are elements in the left or right runs...
    for (int k = iLeft; k < iEnd; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < iRight && (j >= iEnd || A[i] <= A[j])) {
            temp[k] = A[i];
            i = i + 1;
        } else {
            temp[k] = A[j];
            j = j + 1;
        }
    }
}
//buttom up merge sort
void BottomUpMergeSort(int A[], int n)
{
    temp=calloc(n, sizeof(int));
    // Each 1-element run in A is already "sorted".
    // Make successively longer sorted runs of length 2, 4, 8, 16... until whole array is sorted.
    for (int width = 1; width < n; width = 2 * width)
    {
        // Array A is full of runs of length width.
        for (int i = 0; i < n; i = i + 2 * width)
        {
            // Merge two runs: A[i:i+width-1] and A[i+width:i+2*width-1] to B[]
            // or copy A[i:n-1] to B[] ( if(i+width >= n) )
            BottomUpMerge(A, i, min(i+width, n), min(i+2*width, n));
        }
        // Now work array B is full of runs of length 2*width.
        // Copy array B to array A for next iteration.
        // A more efficient implementation would swap the roles of A and B.
        CopyArray(temp, A, n);
        // Now array A is full of runs of length 2*width.
    }
//    BottomUpMergeSort=mergeSort;
    free(temp);
}
//
void (*mergeSort)(int *, int)=BottomUpMergeSort;




void CopyArray2(int A[],int iBegin,int iEnd)
{
    for(int k = iBegin; k < iEnd; k++)
        temp[k] = A[k];
}

//  Left source half is A[ iBegin:iMiddle-1].
// Right source half is A[iMiddle:iEnd-1   ].
// Result is            B[ iBegin:iEnd-1   ].
void TopDownMerge(int A[], int iBegin, int iMiddle, int iEnd,int B[])
{
    int i = iBegin, j = iMiddle;

    // While there are elements in the left or right runs...
    for (int k = iBegin; k < iEnd; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < iMiddle && (j >= iEnd || A[i] <= A[j])) {
            B[k] = A[i];
            i = i + 1;
        } else {
            B[k] = A[j];
            j = j + 1;
        }
    }
}
// Sort the given run of array A[] using array B[] as a source.
// iBegin is inclusive; iEnd is exclusive (A[iEnd] is not in the set).
void TopDownSplitMerge(int B[], int iBegin, int iEnd, int A[])
{
    if(iEnd - iBegin < 2)                       // if run size == 1
        return;                                 //   consider it sorted
    // split the run longer than 1 item into halves
    int iMiddle = (iEnd + iBegin) / 2;              // iMiddle = mid point
    // recursively sort both runs from array A[] into B[]
    TopDownSplitMerge(A, iBegin,  iMiddle, B);  // sort the left  run
    TopDownSplitMerge(A, iMiddle,    iEnd, B);  // sort the right run
    // merge the resulting runs from array B[] into A[]
    TopDownMerge(B, iBegin, iMiddle, iEnd, A);
}



// Array A[] has the items to sort; array B[] is a work array.
void TopDownMergeSort(int A[], int n)
{
    temp=(int *)calloc(n, sizeof(int));
    CopyArray2(A, 0, n);           // one time copy of A[] to B[]
    TopDownSplitMerge(temp, 0, n, A);   // sort data from B[] into A[]
}