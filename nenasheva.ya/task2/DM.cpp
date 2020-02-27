#include <iostream>
#include "DM.h"

DM::DM()
{
	n = 0;
	arr = 0;
}

DM::DM(int q)
{
	n = q;
	arr = new double[n];  //�������� ������ ��� ��������� ���������� ���������, ������� �� �����
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}

DM::~DM()
{
	if (n > 0)  //�������� �� ������������ ������. ���� n = 0, �� ��������� �� �����
	delete[]arr;
}

void DM::set_n(int f)
{
	if (n > 0)
	delete[]arr;
	n = f;
	arr = new double[n];  //�������� ����� ������
}

int DM::get_n()
{
	return n;
}

void DM::set_element(int x, double y)
{
	arr[x] = y;  //���������� � ������ �� ��������� ������ ��������
}

double DM::get_element(int x)
{
	return arr[x];
}