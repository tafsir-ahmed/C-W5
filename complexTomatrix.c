#include <stdio.h>

void cm(double a, double b, double matrix[2][2]);

int main()
{
    double a, b, mat[2][2];

    printf("Enter real part: ");
    scanf("%lf", &a);

    printf("Enter imaginary part: ");
    scanf("%lf", &b);

    cm(a, b, mat);

    printf("[ %.2f  %.2f ]\n", mat[0][0], mat[0][1]);
    printf("[ %.2f  %.2f ]\n", mat[1][0], mat[1][1]);

    return 0;
}

void cm(double a, double b, double matrix[2][2]){
    matrix[0][0] = a;
    matrix[0][1] = -b;
    matrix[1][0] = b;
    matrix[1][1] = a;
}