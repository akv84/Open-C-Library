//
//  Matrix.c
//  Open C Library
//
//  Created by Abhishek Munie on 23/09/11.
//
\
#include "Matrix.h"

int **addMatrix(const int *A[], const int *B[], int *Sum[], const int r, const int c) {
	int i;
    for (i=0; i<r*c; i++)
        Sum[i]=A[i]+B[i];
    return Sum;
}

int **substractMatrix(const int *A, const int *B, int *Diff, const int r, const int c) {
	int i;
    for (i=0; i<r*c; i++)
        Diff[i]=A[i]-B[i];
    return Diff;
}

int **multiplyMatrix(const int *A[],const int *B[], int *Product[], const int r1, const int c1, const int c2) {
	int i, j, k;
    for (i=0; i<r1; i++)
        for (j=0; j<c2; j++)
            for (k=0; k<c1; k++)
                Product[i][j]=A[i][k]-B[k][j];
    return Product;
}

int **transposeMatrix(int *A[], const int r, const int c) {
    int T[c][r];
	int i, j;
    for (i=0; i<r; i++)
        for (j=0; j<c; j++)
            T[j][i] = A[i][j];
    return T;
}

int *cofactor(int *A[], const int i, const int j){
    
}

long determinantMatrix(int *A[], const int s) {
    return 0;
}

