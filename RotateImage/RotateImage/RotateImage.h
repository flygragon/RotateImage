#pragma once
#include<vector>
using namespace std;
class RotateImage {
public:
	void rotate(vector<vector<int>>& matrix) {
		int temp, n = matrix.size(), up = (n - 1) >> 1;
		for (int i = 0; i <= up; i++)
			for (int j = i; j <n - 1 - i; j++) {
				temp = matrix[i][j];
				matrix[i][j] = matrix[n - 1 - j][i];
				matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
				matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
				matrix[j][n - 1 - i] = temp;
			}
	}
};