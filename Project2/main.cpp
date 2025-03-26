#include "util.h"

int main() {
    const int rows = 4;
    const int cols = 4;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    matrix[0][0] = -5; matrix[0][1] = 2; matrix[0][2] = 3; matrix[0][3] = 4;
    matrix[1][0] = 1;  matrix[1][1] = -6; matrix[1][2] = 5; matrix[1][3] = 6;
    matrix[2][0] = 7;  matrix[2][1] = 8;  matrix[2][2] = -4; matrix[2][3] = 9;
    matrix[3][0] = 10; matrix[3][1] = 11; matrix[3][2] = 12; matrix[3][3] = 13;

    findColumnsWithNegativeDiagonal(matrix, rows, cols);

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}