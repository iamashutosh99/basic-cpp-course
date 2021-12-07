// C++ program for implementation of sum of the elements of a matrix

#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 4

int sum_of_row(int row[], int len) {
	int sum = 0;

	for (int j = 0; j < len; j++){
		sum += row[j];
	}

	return sum;
}

// A function to implement 2d matrix sum
int MatrixSum2D(int n, int m, int matrix[R][C])
{
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += sum_of_row(matrix[i], m);
	}
	return sum;
	
}

// Driver code
int main()
{
	int matrix[R][C] = {{0,1,0,0}, {0,3,0,0}, {2,0,0,4}};

	cout << "Sum: \n";
	cout << MatrixSum2D(R, C, matrix) << "\n";
	return 0;
}

// This codelet should have all of the basics for a starter
// to iterate through a matrix in a naive fashion