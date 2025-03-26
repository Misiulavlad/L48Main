#include "util.h"
int findRowWithMaxAbsSum(int** matrix, int rows, int cols) {
	int maxsum = -1;
	int maxrow = -1;
	for (int i = 0; i < rows; ++i) {
		bool allOdd = true;
		int sum = 0;
		for (int j = 0; j < cols; ++j) {
			if (matrix[i][j] % 2 == 0) {
				allOdd = false;
				break;
			}
			sum += abs(matrix[i][j]);
		}
		if (allOdd && sum > maxsum) {
			maxsum = sum;
			maxrow = i;
		}
		return maxrow;
	}
}