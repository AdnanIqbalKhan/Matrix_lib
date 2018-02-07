<<<<<<< HEAD
#include"stdafx.h"
=======
#include <iostream>
#include "stdafx.h"

using namespace std;

int multiplyMatrix(int** A, int** B, int** Result, int colA, int colB, int rowA, int rowB){
	if (colA == rowB){
		Result = new int*[rowA];
		for (int ii = 0; ii < rowA; ++ii)
			Result[ii] = new int[colB];
		for (int i = 0; i < rowA; i++)
		{
			for (int j = 0; j < colB; j++)
			{
				Result[i][j] = 0;
				for (int k = 0; k < colA; k++)
				{
					Result[i][j] = Result[i][j] + A[i][k] * B[k][j];
				}
			}
		}
		return 0;
	}
	else{
		return -1;
	}
}


>>>>>>> 32aa1afda7e7403001f1896df804701641b134e2
