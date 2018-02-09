#include "MatrixLib.h"

int AddMatrix(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &C)
{
	C.erase(C.begin(), C.end());

	int rowA = A.size();
	int colA = A[0].size();
	int rowB = B.size();
	int colB = B[0].size();

	if (colA == colB && rowB == rowA) {
		std::vector<int> temp(colA);
		for (int ii = 0; ii < rowA; ++ii) {
			C.push_back(temp);
		}

		for (int i = 0; i < rowA; i++)
		{
			for (int j = 0; j < colA; j++)
			{
				C[i][j] = A[i][j] + B[i][j];
			}
		}
		return 0;
	}
	else
	{
		return -1;
	}
}

int SubtractMatrix(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &C)
{
	C.erase(C.begin(), C.end());

	int rowA = A.size();
	int colA = A[0].size();
	int rowB = B.size();
	int colB = B[0].size();
	if (colA == colB && rowB == rowA) {
		std::vector<int> temp(colA);
		for (int ii = 0; ii < rowA; ++ii) {
			C.push_back(temp);
		}

		for (int i = 0; i < rowA; i++)
		{
			for (int j = 0; j < colA; j++)
			{


				C[i][j] = A[i][j] - B[i][j];

			}
		}
		return 0;
	}
	else
	{
		return -1;
	}
}
