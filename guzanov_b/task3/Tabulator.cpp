
#pragma once
#include "Tab.h"
float exponenta(float j)
{
    return exp(j);
}
float cosinus(float j)
{
    return cos(j);
}
float sinus(float j)
{
    return sin(j);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    Tab A;
    cout << "A:" << endl;
    cout << "���������� ����� ������������� point = " << A.getpoint() << endl;//3) ������ ������� ����� ����� �������������
    cout << "����� ������� ������������� = " << A.getleft() << endl;
    cout << "������ ������� ������������� = " << A.getright() << endl;

    Tab B(2,18,4,exponenta);
    cout << "A = B" << endl;
    A = B;
    cout << "A:" << endl;
    cout << "���������� ����� ������������� point = " << A.getpoint() << endl;
    cout << "����� ������� ������������� = " << A.getleft() << endl;
    cout << "������ ������� ������������� = " << A.getright() << endl;
    float right_;
    float left_;
    float point_;
    cout << "B:" << endl;
    cout << "������� ����� ������� �������������" << endl;// 4) ������ ������� ������������� , , , .
    cin >> left_;
    B.setleft(left_);
    cout << "������� ������ ������� �������������" << endl;// 4) ������ ������� ������������� , , , .
    cin >> right_;
    B.setright(right_);
    cout << "������� ����� ����� �������������" << endl;//2) ������ ������� ����� ����� �������������
    cin >> point_;
    B.setpoint(point_);
    cout << "B:" << endl;
    cout << "����� ����� ������������� point = " << B.getpoint() << endl;
    cout << "������� �������������  : " <<" left= "<<B.getleft() << " right= " << B.getright() << endl;//5) ������ ������� �������������
    int k = B.tabulate();//6) ��������� ������������� �������
    cout << "���������� �������������:" << endl;//7) ������ ���������� �������������
    B.save_to_file(k);
    B.read_file();
    system("pause");
}
/*
//char menu1[5][15] = { "1)����������","2)�������","3)�����" };
// int choice = item(menu1, 5);
    //int choice;
    //cin >> choice;
    Tab A;//1) ������ ������� �������
int item(char menu[][15], int nmenu) {//
    int i, k;
    for (i = 0; i < nmenu; i++)
        printf("%s\n", menu[i]);
    cin >> k;
    return k;
      //B.rec(k);
        //
       //
}*/
//unum ={}