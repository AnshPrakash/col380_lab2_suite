#ifndef LAB2_IO_H
#define LAB2_IO_H

#include <stdio.h>
#include <malloc.h>

/*
	M : number of rows (samples) in input matrix D
    N : number of columns (features) in input matrix D
    D : 1D Array of M x N input matrix in row-major, 
        #elements in D is (M * N)
        --------------------------------------------------------------------------------------
        | D[0][0] | D[0][1] | ... | D[0][N-1] | D[1][0] | ... | D[1][N-1] | ... | D[M-1][N-1] |
        --------------------------------------------------------------------------------------
*/
void read_matrix (const char* input_filename, int* M, int *N, float** D);

/*
check correctess of Singular Vector Decomposition
Arguments:
    M : number of rows (samples) in input matrix D
    N : number of columns (features) in input matrix D
    D : 1D Array of M x N input matrix in row-major, 
        #elements in D is (M * N)
        --------------------------------------------------------------------------------------
        | D[0][0] | D[0][1] | ... | D[0][N-1] | D[1][0] | ... | D[1][N-1] | ... | D[M-1][N-1] |
        --------------------------------------------------------------------------------------
    U : 1D array of M x M real matrix (computed by SVD) in row-major
        --------------------------------------------------------------------------------------
        | U[0][0] | U[0][1] | ... | U[0][M-1] | U[1][0] | ... | U[1][M-1] | ... | U[M-1][M-1] |
        --------------------------------------------------------------------------------------
    SIGMA : 1D array of M x N diagonal matrix of positive real numbers (computed by SVD),
        consisting only digonal elements.
        #elements in SIGMA is M
        -------------------------------------------------------------------
        | SIGMA[0][0] | SIGMA[1][1] | SIGMA[2][2] | ... | SIGMA[M-1][M-1] |
        -------------------------------------------------------------------
    V_T : 1D array of N x N real matrix (computed by SVD) in row-major
        --------------------------------------------------------------------------------
        | V_T[0][0] | V_T[0][1] | ... | V_T[0][N-1] | V_T[1][0] | ...  | V_T[N-1][N-1] |
        --------------------------------------------------------------------------------
*/
void is_correct_SVD (int M, int N, float* D, float* U, float* SIGMA, float* V_T);

/*
check correctness of Principal Component Analysis
Arguments:
    M : number of rows (samples) in reduced matrix D_HAT
    K : number of coulmns (features) in reduced matrix D_HAT
    D_HAT : reduced matrix (computed by PCA) in row-major
        -------------------------------------------------------------------------------------
        | D_HAT[0][0] | D_HAT[0][1] | ... | D_HAT[0][K-1] | D_HAT[1][0] | ... | D[M-1][K-1] |
        -------------------------------------------------------------------------------------
*/
void is_correct_PCA (int M, int K, float* D_HAT);

#endif