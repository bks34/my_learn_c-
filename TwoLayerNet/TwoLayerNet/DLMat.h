#pragma once
#include "Matrix.h"

/*
* ���ڹ���������ľ�����
* �����һЩ�������о����õ��Ĺ���
*/
class DLMat :
    public Matrix
{
public:
    using Matrix::Matrix;

    void RandomValue();

    friend DLMat SoftMax(const DLMat& m);

    friend double CrossEntropyError(const DLMat& y, const DLMat& t); //���������
    friend double MeanSquaredError(const DLMat& y, const DLMat& t);  //��������

    //���ü����
    friend DLMat Sigmoid(const DLMat& m);
    friend DLMat StepFunction(const DLMat& m);

    friend DLMat operator+(const DLMat& m, double c);
    friend DLMat operator-(const DLMat& m, double c);
    friend DLMat operator+(const DLMat& m1, const DLMat& m2);
    friend DLMat operator-(const DLMat& m1, const DLMat& m2);
    friend DLMat operator*(double c, const DLMat& m);//����
    DLMat operator*(const DLMat& m) const;
};

