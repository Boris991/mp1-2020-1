#include "Konverter.h"
#include <stdio.h>

Konverter::Konverter()  //����������� �� ��������� ��� ���������� � �������
{
	d = 0;
}

Konverter::Konverter(double x)
{
	d = x;
}

Konverter::~Konverter()  //������
{
	//������ ������������� �������������
}

double Konverter::dume()
{
	return d * 100 / 2.5;
}

double Konverter::fut()
{
	return d * 3.28;
}

double Konverter::yard()
{
	return d * 1.1;
}

double Konverter::mile()
{
	return d * 0.000621371;
}

double Konverter::arshin()
{
	return d * 1.406;
}

double Konverter::millimeter()
{
	return d * 1000;
}

void Konverter::set(double x)  //��������
{
	d = x;
}

double Konverter::get()//�����
{
	return d;
}

void Konverter::write()
{
	printf("%lf", d);
}