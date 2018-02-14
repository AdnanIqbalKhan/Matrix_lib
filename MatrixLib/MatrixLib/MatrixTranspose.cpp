#include "MatrixLib.h"

int TransposeMatrix(std::vector<std::vector<int>> &A,std::vector<std::vector<int>> &C)
{
	C.erase(C.begin(), C.end());

	int rowA = A.size();
	int colA = A[0].size();
		std::vector<int> temp(colA);
		for (int ii = 0; ii < rowA; ++ii) {
			C.push_back(temp);
		}

		for (int i = 0; i < rowA; i++)
		{
			for (int j = 0; j < colA; j++)
			{
				C[i][j] = A[j][i];
			}
		}
		return 0;
}
