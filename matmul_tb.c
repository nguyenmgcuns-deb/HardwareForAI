#include <stdio.h>

#define SIZE 3

void matrix_vector_mult(int mat[SIZE][SIZE], int vec[SIZE], int result[SIZE]);

int main() {
    // Define a 3x3 matrix and a 1x3 vector for testing
    int mat[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int vec[SIZE] = {2, 3, 4};

    // Array to hold the result
    int result[SIZE];

    // Call the function to test
    matrix_vector_mult(mat, vec, result);

    // Print the result
    printf("Result vector: \n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
