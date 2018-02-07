<<<<<<< HEAD
#include <iostream>
#include"stdafx.h"
using namespace std;


int AddMatrix(int** A, int** B, int** C, int colA, int colB, int rowA, int rowB){

	if (colA ==colB && rowB==rowA){
		 C = new int*[rowA];
		for (int ii = 0; ii < rowA; ++ii)
			C[ii] = new int[colA];

		for (int i = 0; i < rowA; i++)
		{
			for (int j = 0; j < colA; j++)
			{
				
				
					C[i][j] =  A[i][j] + B[i][j];
				
			}
		}
		return 0;
	}
	else
	{
		return -1;
	}

}
int SubtractMatrix(int** A, int** B, int** C, int colA, int colB, int rowA, int rowB){

	if (colA == colB && rowB == rowA){
		C = new int*[rowA];
		for (int ii = 0; ii < rowA; ++ii)
			C[ii] = new int[colA];

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
=======
#include "stdafx.h"
>>>>>>> 32aa1afda7e7403001f1896df804701641b134e2
