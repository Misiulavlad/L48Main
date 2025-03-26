#include "util.h"
int findColumnWithMinProduct(int** matrix, int rows, int cols, int N) {
	int minProduct = 1000000000;
	int minColumn = -1;
	for (int col = 0; col < cols; ++col) {
		bool all = true;
		int product = 1;
		for (int row = 0; row < rows; ++row) {
			if (abs(matrix[row][col]) > N) {
				all = false;
				break;
			}
			product *= matrix[row][col];
		}

		if (all && product < minProduct) {
			minProduct = product;
			minColumn = col;
		}
	}

	return minColumn;
}