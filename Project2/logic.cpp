#include "util.h"

void findColumnsWithNegativeDiagonal(int** matrix, int rows, int cols) {
    cout << "Columns with negative element on the main diagonal:" << endl;

    for (int i = 0; i < rows && i < cols; ++i) {
        if (matrix[i][i] < 0) {
            int sum = 0;
            for (int j = 0; j < rows; ++j) {
                sum += matrix[j][i];
            }
            cout << "Column: " << i + 1 << ", Sum: " << sum << endl;
        }
    }
}