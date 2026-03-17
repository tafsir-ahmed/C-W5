#include <stdio.h>

// Function prototypes
void cm(double a, double b, double matrix[2][2]); // Creates 2x2 matrix from complex number
void MatMul(double A[2][2], double B[2][2], double C[2][2]); // Multiplies 2x2 matrices

int main() {
    double a1, b1, a2, b2; // real and imaginary parts
    double mat1[2][2], mat2[2][2], result[2][2];

    // Input first complex number
    printf("Enter first complex number (real part then imaginary part): ");
    scanf("%lf %lf", &a1, &b1);
    cm(a1, b1, mat1); // Convert to 2x2 matrix

    // Input second complex number
    printf("Enter second complex number (real part then imaginary part): ");
    scanf("%lf %lf", &a2, &b2);
    cm(a2, b2, mat2); // Convert to 2x2 matrix

    // Multiply matrices
    MatMul(mat1, mat2, result);

    // Print resulting matrix
    printf("Resulting 2x2 matrix:\n");
    for(int i = 0; i < 2; i++){
        printf("[ ");
        for(int j = 0; j < 2; j++){
            printf("%.2f ", result[i][j]);
        }
        printf("]\n");
    }

    return 0;
}

// Create 2x2 matrix representation of a complex number
void cm(double a, double b, double matrix[2][2]){
    matrix[0][0] = a;
    matrix[0][1] = -b;
    matrix[1][0] = b;
    matrix[1][1] = a;
}

// Multiply two 2x2 matrices
void MatMul(double A[2][2], double B[2][2], double C[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            C[i][j] = 0;
            for(int k = 0; k < 2; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}