//
// Created by ali raz on 6/4/20.
//
#include <stdlib.h>

#include <stdio.h>
#include "linkedListInsertionSort.h"

//C Program for Bubble Sort on Linked List
typedef struct node {
    struct node *next;
    int val;
} node;

void sortNode(node **start, int value) {
    node *previous = NULL;
    node *curr = *start;
    while (curr != NULL) {
        if (curr->val < value) {
            previous = curr;
            curr = curr->next;
        } else {
            node *new;
            new = malloc(sizeof(struct node));
            if (previous == NULL) {
                *start =new;
            } else {
                previous->next = new;
            }
            new->val = value;
            new->next = curr;
            return;
        }

    }

    curr = malloc(sizeof(node));
    previous->next = curr;
    curr->next = NULL;
    curr->val = value;
}

void insertionSortUsingLinkedLists(int arr[], int length) {
    node *start;
    start = malloc(sizeof(node));
    start->next = NULL;
    start->val = arr[0];
    for (int i = 1; i < length; ++i) {
        sortNode(&start, arr[i]);
    }
    int i = 0;
    node *curr = start;
    node *previous;
    while (curr != NULL) {
        arr[i] = curr->val;
        i++;
        previous=curr;
        curr = curr->next;
        free(previous);
    }

}