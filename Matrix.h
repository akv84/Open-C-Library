//
//  Matrix.h
//  Open C Library
//
//  Created by Abhishek Munie on 19/10/11.
//

#ifndef Open_C_Library_Matrix_h
#define Open_C_Library_Matrix_h

int **addMatrix(const int *A, const int *B, int *Sum, const int r, const int c);
int **substractMatrix(const int*A, const int *B, int *Diff, const int r, const int c);
int **multiplyMatrix(const int *A[], const int *B[], int *Product[], const int r1, const int c1, const int r2);
int **transposeMatrix(const int *A[], int *T[], const int r, const int c);
void mirrorMatrix(int *A[], const int r, const int c);
int *cofactor(int *A[], const int i, const int j);
long determinantMatrix(int *A[], const int s);

#endif