// ch02.5.cpp -- �����µ��� �Է��� ���� �䱸�ϰ� ȭ���� ��ȯ�� ���� ����ϱ�
// ȭ���µ� = 1.8 X �����µ� + 32.0

#include <iostream>

double convtemperature(double);

int main()
{
    using namespace std;
    
    double cel;
    cout << "���� �µ��� �Է��ϰ� EnterŰ�� ��������: ";
    cin >> cel;
    double fah;
    fah = convtemperature(cel);
    cout << "���� " << cel << "���� ȭ���� " 
         << fah << "���Դϴ�." << endl;
    return 0;
}

double convtemperature(double n)
{
    return (1.8 * n) + 32.0;
}