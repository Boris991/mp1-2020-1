#pragma once
class Konverter
{
private:
	double d;  //����� � ������
public:
	Konverter();
	Konverter(double x);
	~Konverter();

	double dume();
	double fut();
	double yard();
	double mile();
	double arshin();
	double millimeter();

	void set(double x);
	double get();
	void write();
};