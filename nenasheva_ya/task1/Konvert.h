#pragma once
class Konvert
{
private:
	double d;  //����� � ������
public:
	Konvert();
	Konvert(double x);
	~Konvert();

	double dume();
	double fut();
	double yard();

	void set(double x);
	double get();
	void write();
};