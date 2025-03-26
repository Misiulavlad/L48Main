#include "util.h"

int main() {
    const int rows = 4;
    const int cols = 5;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    matrix[0][0] = 1; matrix[0][1] = -3; matrix[0][2] = 5; matrix[0][3] = 7; matrix[0][4] = 9;
    matrix[1][0] = -2; matrix[1][1] = 4; matrix[1][2] = 6; matrix[1][3] = -8; matrix[1][4] = 10;
    matrix[2][0] = -11; matrix[2][1] = 13; matrix[2][2] = -15; matrix[2][3] = 17; matrix[2][4] = 19;
    matrix[3][0] = -1; matrix[3][1] = -3; matrix[3][2] = 2; matrix[3][3] = -5; matrix[3][4] = -7;

    int result = findRowWithMaxAbsSum(matrix, rows, cols);

    if (result != -1) {
        cout << "Row with maximum sum of absolute values: " << result + 1 << endl;
    }
    else {
        cout << "No rows contain only odd elements." << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
