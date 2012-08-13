//
//  Sort.c
//  Open C Library
//
//  Created by Abhishek Munie on 24/07/12.
//

#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"

#ifdef DEBUG
void printMerge(char T, int *ARR, int lb, int ub) {
    int i;
    printf("%c: %d\t{\t", T, ARR[0]);
    for (i=1; i<10; i++) {
        if(i == lb)
            printf("|");
        printf("\t%d\t", ARR[i]);
        if(i == ub)
            printf("|");
    }
    printf("\t}\n");
}
#else
inline void printMerge(int *ARR, int lb, int ub) {}
#endif

void Merge(int A[], int B[], int llb, int lub, int rlb, int rub) {
    int i = llb, j = rlb, c = llb;
    while ((i<=lub)&&(j<=rub)) {
        if (A[i]<=A[j]) {
            B[c++] = A[i++];
        } else {
            B[c++] = A[j++];
        }
    }
    while (i<=lub) {
        B[c++]=A[i++];
    }
    while (j<=lub) {
        B[c++]=A[j++];
    }
}

void MergeSortInt(int A[], int B[], int lb, int ub) {
#ifdef DEBUG
    printMerge('A', A, lb, ub);
    printMerge('B', B, lb, ub);
    printf("\n");
#endif
    if (lb<ub) {
        int mid = (lb+ub)/2;
        MergeSortInt(B, A, lb, mid);
        MergeSortInt(B, A, mid+1, ub);
#ifdef DEBUG
        printMerge('A', A, lb, ub);
        printMerge('B', B, lb, ub);
#endif
        Merge(B, A, lb, mid, mid+1, ub);
    } else if (lb==ub) {
        A[lb]&&(B[lb]=A[lb]);
        B[lb]&&(A[lb]=B[lb]);
    }
#ifdef DEBUG
    printMerge('A', A, lb, ub);
    printMerge('B', B, lb, ub);
    printf("\n");
#endif
}

void MergeSort2(int A[], const int lb, const int ub) {
	int A2[ub+1];
    int i;
    for (i=lb; i<=ub; i++) {
        A2[i]=0;
    }
    A2[0]=0;
	MergeSortInt(A, A2, lb, ub);
}

void MergeSort(int A[], int n) {
	MergeSort2(A, 0, n - 1);
}


void MergeSortTest(void) {
    int A1[] = {1, 3,-33,-2,9,4,35,99,5,6};
    MergeSort2(A1, 1, 9);
}
