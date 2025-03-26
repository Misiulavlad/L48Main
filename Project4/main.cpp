#include "util.h"

int main() {
    const int rows = 4;
    const int cols = 3;
    const int N = 10;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    matrix[0][0] = 2; matrix[0][1] = 4;  matrix[0][2] = -3;
    matrix[1][0] = 3; matrix[1][1] = 11; matrix[1][2] = 6;
    matrix[2][0] = 5; matrix[2][1] = 9;  matrix[2][2] = -2;
    matrix[3][0] = 1; matrix[3][1] = 7;  matrix[3][2] = 8;

    int result = findColumnWithMinProduct(matrix, rows, cols, N);

    if (result != -1) {
        cout << "Column with minimum product of elements (within limit " << N << "): " << result + 1 << endl;
    }
    else {
        cout << "No columns meet the condition." << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
