//
//  Sort.c
//  Open C Library
//
//  Created by Abhishek Munie on 24/07/12.
//

#include <stdio.h>
#include <assert.h>
#include "SortTEST.h"
#include "../Sort.h"

void MergeSort2TEST(void) {
    /*int A1[] = {9,-99,-3,2,5,4,35,99,5,0};
     int A2[] = {9,-99,-3,0,2,4,5,5,35,99};
     int A3[] = {5,45,1,12,18,15};
     int A4[] = {5,1,12,15,18,45};
     int i;
     MergeSort2(A1, 1, A1[0]);
     for (i = 1; i <= A1[0]; i++) {
     printf(", %d",A1[i]);
     assert(A1[i]==A2[i]);
     }
     MergeSort2(A3, 1, A3[0]);
     for (i = 1; i <= A3[0]; i++) {
     assert(A3[i]==A4[i]);
     }*/
}

void MergeSortTEST(void) {
    /*int A1[] = {-99,-3,2,5,4,35,99,5,0};
     int A2[] = {-99,-3,0,2,4,5,5,35,99};
     MergeSort(A1, 9);
     int i;
     for (i = 0; i < 9; i++) {
     printf(", %d",A1[i]);
     //assert(A1[i]==A2[i]);
     }*/
    MergeSortTest();
}

void SortTEST(void) {
    MergeSortTEST();
    MergeSort2TEST();
}
