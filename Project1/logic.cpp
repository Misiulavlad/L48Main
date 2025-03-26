#include "util.h"
void findEvenColumns(int** matrix, int rows, int cols) {
    cout << "Columns with all even elements:" << endl;
    for (int col = 0; col < cols; ++col) {
        bool isEvenColumn = true;
        for (int row = 0; row < rows; ++row) {
            if (matrix[row][col] % 2 != 0) {
                isEvenColumn = false;
                break;
            }
        }
        if (isEvenColumn) {
            cout << col + 1 << endl;
        }
    }
}
