//
// Created by ali raz on 6/1/20.
//

#include "swap.h"

iParent(int i) {
    return (i - 1) / 2;
}

iLeftChild(int i) {
    return 2 * i + 1;
}

//iRightChild(int i) {
//    return 2 * i + 2;
//}

void siftDown(int a[], int start, int end) {
    int root = start;
    while (iLeftChild(root) <= end)//While the root has at least one child
    {
        int child = iLeftChild(root);
        int Swap = root;//Keeps track of child to swap with
        if (a[Swap] < a[child])
            Swap = child;
        //If there is a right child and that child is greater
        if (child + 1 <= end && a[Swap] < a[child + 1]) {
            Swap = child + 1;
        }
        if (Swap == root) {
/*      The root holds the largest element. Since we assume the heaps rooted at the
        children are valid, this means that we are done.*/
            return;
        } else {
            swap(&a[root], &a[Swap]);
            root = Swap;         //repeat to continue sifting down the child now
        }

    }
}
void heapify(int array[], int count){
//    start is assigned the index in 'a' of the last parent node
//    the last element in a 0-based array is at index count-1; find the parent of that element
    int start=iParent(count-1);
    while (start>=0){
        /*sift down the node at index 'start' to the proper place such that all nodes below
        the start index are in heap order*/
        siftDown(array, start, count - 1);
        //go to the next parent node
        start--;
        //after sifting down the root all nodes/elements are in heap order
    }
}
void heapSort(int array[], int length) {
    //Build the heap in array a so that largest value is at the root
    heapify(array, length);
    int end = length - 1;
    while (end > 0) {
        //a[0] is the root and largest value. The swap moves it in front of the sorted elements.
        swap(&array[end], &array[0]);

        //the heap size is reduced by one
        end--;
        //the swap ruined the heap property, so restore it
        siftDown(array, 0, end);
    }
}