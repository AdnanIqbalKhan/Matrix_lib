#include "MatrixLib.h"

int multiplyMatrix(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &C)
{
	C.erase(C.begin(), C.end());

	int rowA = A.size();
	int colA = A[0].size();
	int rowB = B.size();
	int colB = B[0].size();

	if (colA == rowB) {
		std::vector<int> temp(colA);
		for (int ii = 0; ii < rowA; ++ii) {
			C.push_back(temp);
		}

		for (int i = 0; i < rowA; i++)
		{
			for (int j = 0; j < colB; j++)
			{
				C[i][j] = 0;
				for (int k = 0; k < colA; k++)
				{
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
				}
			}
		}
		return 0;
	}
	else {
		return -1;
	}
}
