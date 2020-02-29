#include<iostream>
#include<locale>

class DynamicArr
{
private:
	double* arr; //������ 
	int len; //����� �������

public:
	DynamicArr();
	DynamicArr(int size);
	DynamicArr(DynamicArr& x);
	~DynamicArr();
	DynamicArr& operator=(DynamicArr& x);

	int get_len(); //������ ����� �������
	void set_len(int f); //������ ����� ������� 

	double get(int x); //������ ������� ������� �� ������� 
	void set(int x, double zn); //������ ������� ������� �� ��� ������� 

	double get_min_el(); //����� ������������ �������� 
	int test1(); //�������� �� ��������������� �� ��������
	int test2(); //�������� �� ��������������� �� ����������� 

	DynamicArr nechet(); //��������� � ��������� ���������
};

DynamicArr::DynamicArr()
{
	arr = NULL;
	len = 0;
}
DynamicArr::DynamicArr(int size)
{
	len = size;
	arr = new double[len];
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
DynamicArr::DynamicArr(DynamicArr& x)
{
	len = x.len;
	arr = new double[len];
	for (int i = 0; i < len; i++)
	{
		arr[i] = x.arr[i];
	}
}
DynamicArr::~DynamicArr()
{
	if (arr != NULL) free(arr);
}
DynamicArr& DynamicArr::operator=(DynamicArr& x)
{
	if (len != x.len)
	{
		free(arr);
		len = x.len;
		arr = new double[len];
	}
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
	return *this;
}
void DynamicArr::set_len(int f)
{
	if (len > 0)
		free(arr);
	len = f;
	arr = new double[len];
}
int DynamicArr::get_len()
{
	return len;
}
void DynamicArr::set(int x, double zn)
{
	arr[x] = zn;
}
double DynamicArr::get(int x)
{
	return arr[x];
}
double DynamicArr::get_min_el()
{
	double min = 100000000000;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
int DynamicArr::test1()
{
	for (int i = 0; i < len - 1; i++)
	{
		if (arr[i] < arr[i + 1])
			return 0;
	}
	return 1;
}
int DynamicArr::test2()
{
	for (int i = 0; i < len - 1; i++)
	{
		if (arr[i + 1] < arr[i])
			return 0;
	}
	return 1;
}
DynamicArr DynamicArr::nechet()
{
	DynamicArr Result(len / 2);
	for (int i = 1; i < len; i += 2)
	{
		Result.arr[i / 2] = arr[i];
	}
	return Result;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int k;
	printf("������� ������ �������: ");
	scanf_s("%d", &k);
	DynamicArr mas(k);
	printf("������ �������: %d \n", mas.get_len());

	printf("������� ����� ������ �������: ");
	scanf_s("%d", &k);
	mas.set_len(k);
	printf("����� ������ �������: %d \n", mas.get_len());

	printf("������� �������� ���������: ");
	for (int i = 0; i < k; i++)
	{
		double zn;
		scanf_s("%lf", &zn);
		mas.set(i, zn);
	}

	printf("��� ������: ");
	for (int i = 0; i < k; i++)
	{
		printf("%lf ", mas.get(i));
	}
	printf("\n");

	printf("����������� �������: ");
	double r = mas.get_min_el();
	printf("%lf\n", r);

	if (mas.test1())
		printf("������������� �� ��������\n");
	if (mas.test2())
		printf("������������� �� �����������\n");
	if (!mas.test1() && !mas.test2())
		printf("�� �������������\n");

	DynamicArr Res = mas.nechet();
	printf("��� ��������� � ��������� ���������: ");
	for (int i = 0; i < Res.get_len(); i++)
	{
		printf("%lf ", (Res.get(i)));
	}
	printf("\n");

	system("pause");
}