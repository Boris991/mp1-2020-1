#include <iostream>
#include <locale.h>
#include "DM.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int k;
	cout << "������� ����� �������: ";
	cin >> k;

	DM mas1(k);
	cout << "����� �������: " << mas1.get_n() << '\n';

	cout << "������� ����� ����� �������: ";
	cin >> k;
	mas1.set_n(k);
	cout << "����� ����� �������: " << mas1.get_n() << '\n';

	cout << "������ �������� ���������: ";
	for (int i = 0; i < k; i++)
	{
		double y;
		cin >> y;
		mas1.set_element(i, y);
	}

	cout << "������� ������: ";
	for (int i = 0; i < k; i++)
	{
		cout << mas1.get_element(i) << " ";
	}
	cout << endl;

	system("pause");
}