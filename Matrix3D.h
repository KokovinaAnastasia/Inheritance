#pragma once
#include "MatrixBase.h"

class Matrix3D : public MatrixBase
{
public:
	Matrix3D() : MatrixBase(size) {};
	virtual int element(unsigned int i, unsigned int j) const override;
	virtual int& element(unsigned int i, unsigned int j) override;
private:
	static const int size = 3;
	int matrix[size][size];
};
