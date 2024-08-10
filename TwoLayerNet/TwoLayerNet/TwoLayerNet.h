#pragma once
#include "DLMat.h"
#include <unordered_map>
#include <functional>
using std::unordered_map;
using std::string;
using std::function;

class TwoLayerNet
{
public:
	TwoLayerNet(int input_size, int hidden_size, int output_size, double weight_init_std = 0.01);

	DLMat Predict(const DLMat& x);//ʹ��������
	double Loss(const DLMat& x, const DLMat& t);//�������
	unordered_map<string, DLMat> NumericalGradient(const DLMat& x, const DLMat& t);//��ֵ�ݶ�

	bool LoadNet(string filename);//���ļ��м��ز���
	bool StoreNet(string filename);//�������

	unordered_map<string, DLMat> params;

};

