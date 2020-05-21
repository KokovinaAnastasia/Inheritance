#include "pch.h"
#include "MatrixBase.h"
#include <iostream>

using namespace std;

unsigned int MatrixBase::size() const { return m_size; }

MatrixBase::MatrixBase(unsigned int iSize) : m_size(iSize) {}

void MatrixBase::operator*=(int iMult)
{
	for (int i = 0; i < m_size; i++)
		for (int j = 0; j < m_size; j++)
			element(i, j) = element(i, j) * iMult;
}

void MatrixBase::operator+=(MatrixBase& iAdd)
{
	for (int i = 0; i < m_size; i++)
		for (int j = 0; j < m_size; j++)
			element(i, j) = element(i, j) + iAdd.element(i,j);
}

ostream& operator<<(ostream& stream, const MatrixBase& iMatrix)
{
	int matrSize = iMatrix.size();
	for (int i = 0; i < matrSize; i++)
	{
		for (int j = 0; j < matrSize; j++)
			stream << iMatrix.element(i, j) << " ";
		stream << endl;
	}
	return stream;
}
