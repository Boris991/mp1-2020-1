
#pragma once
#include "Tab.h"
int main()
{
    setlocale(LC_ALL, "Russian");

    Tab A(12, 1);
    cout << "A:" << endl;
    cout << "���������� ����� ������������� p = " << A.getp() << endl;
    cout << "������� ������������� sec = " << A.getsec() << endl;
    Tab B(17, 1);
    cout << "A = B" << endl;
    A = B;
    cout << "A:" << endl;
    cout << "���������� ����� ������������� p = " << A.getp() << endl;
    cout << "������� ������������� sec = " << A.getsec() << endl;
    float sec_;
    float p_;
    cout << "B:" << endl;
    cout << "������� sec(������� �������������)" << endl;// 4) ������ ������� ������������� , , , .
    cin >> sec_;
    B.setsec(sec_);
    cout << "������� p (���������� ����� �������������)" << endl;
    cin >> p_;
    B.setp(p_);
    cout << "B:" << endl;
    cout << "���������� ����� ������������� p = " << B.getp() << endl;
    cout << "������� ������������� = " << B.getsec() << endl;//5) ������ ������� �������������
    float k = B.tab(sec_, p_);//6) ��������� ������������� �������
    cout << "��������� ������������� - " << k << endl;//7) ������ ���������� �������������
    B.rec(k);
    //Tab Pifunction();
    //Tab Pifunction(0.5,0.5);
    system("pause");
}
