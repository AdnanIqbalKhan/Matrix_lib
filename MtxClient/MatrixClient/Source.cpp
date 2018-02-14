#include <MatrixLib.h>
#include <iostream>


using namespace std;

void print(vector<vector<int>> A) {
	for (size_t i = 0; i < A.size(); i++)
	{
		for (size_t j = 0; j < A[i].size(); j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
}


int main() {

	vector<vector<int>> A = { { 1,2 },{ 3,4 } };
	vector<vector<int>> B = { { 5,6 },{ 7,8 } };
	vector<vector<int>> C;
	cout << endl << "A" << endl;
	print(A);
	cout << endl << "B" << endl;
	print(B);

	int f = AddMatrix(A, B, C);
	cout << endl << "A + B" << endl;
	print(C);
	
	f = SubtractMatrix(A, B, C);
	cout << endl << "A - B" << endl;
	print(C);

	f = multiplyMatrix(A, B, C);
	cout << endl << "A * B" << endl;
	print(C);
}