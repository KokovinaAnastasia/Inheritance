#include "pch.h"
#include "Matrix2D.h"
#include "MatrixBase.h"

int Matrix2D::element(unsigned int i, unsigned int j) const
{
	return matrix[i][j];
}

int& Matrix2D::element(unsigned int i, unsigned int j)
{
	return matrix[i][j];
}