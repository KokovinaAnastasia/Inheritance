#include "pch.h"
#include <iostream>
#include "MatrixBase.h"
#include "Matrix2D.h"
#include "Matrix3D.h"

using namespace std;

void SetMatrix(MatrixBase& matrix)
{
	int counter = 1;
	for (int i = 0; i < matrix.size(); i++)
		for (int j = 0; j < matrix.size(); j++)
			matrix.element(i, j) = counter++;
}

int main()
{
	constexpr int valueForMultiply = 5;

	Matrix2D m2a, m2b;
	Matrix3D m3a, m3b;

	SetMatrix(m2a);
	SetMatrix(m2b);

	cout <<"First matrix 2x2"<< endl << m2a << endl;

	m2a *= valueForMultiply;
	cout << "Result of multiplying with " << valueForMultiply << endl;
	cout << m2a << endl;

	cout << "Second matrix 2x2" << endl << m2b << endl;

	m2a += m2b;
	cout << "Result of adding matrices "<< endl;
	cout << m2a << endl;

	SetMatrix(m3a);
	SetMatrix(m3b);

	cout << "First matrix 3x3" << endl << m3a << endl;

	m3a *= valueForMultiply;
	cout << "Result of multiplying with " << valueForMultiply << endl;
	cout << m3a << endl;

	cout << "Second matrix 3x3" << endl << m3b << endl;

	m3a += m3b;
	cout << "Result of adding matrices " << endl;
	cout << m3a << endl;
	
	system("pause");
	return 0;
}
