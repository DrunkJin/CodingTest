// divide.cpp -- ���� �������� �ε��Ҽ����� ������
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "���� ������: 9/5 = " << 9 /5 << endl;          // int������ ����
    cout << "�ε� �Ҽ����� ������: 9.0 / 5.0 = ";           // double ������ ����
    cout << 9.0 / 5.0 << endl;                              
    cout << "ȥ�� ������: 9.0 / 5 = " << 9.0 / 5 << endl;   // double ����
    cout << "double�� ���: 1e7 / 9.0 = ";                  // double tngod
    cout << 1e7 / 9.0 << endl;
    cout << "float�� ���: 1e7f / 9.0f = ";                 // float ������ ����
    cout << 1.e7f / 9.0f << endl;
    return 0;
}

// �⺻������ �ε��Ҽ����� double


// ���� ������: 9/5 = 1
// �ε� �Ҽ����� ������: 9.0 / 5.0 = 1.800000
// ȥ�� ������: 9.0 / 5 = 1.800000
// double�� ���: 1e7 / 9.0 = 1111111.111111
// float�� ���: 1e7f / 9.0f = 1111111.125000