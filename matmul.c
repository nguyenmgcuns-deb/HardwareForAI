#include <stdio.h>

#define SIZE 3

// Function to multiply a 3x3 matrix with a 1x3 vector
void matrix_vector_mult(int mat[SIZE][SIZE], int vec[SIZE], int result[SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        result[i] = 0;
        for(int j = 0; j < SIZE; j++) {
            result[i] += mat[i][j] * vec[j];
        }
    }
}
