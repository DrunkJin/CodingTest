// ch02.7.cpp
// �ð��� ���� ���� ���� �Է��ϰ� �ϰ� void �Լ��� ������ void�Լ��� "�ð� : [�ð�]:[��]"���� ǥ���ϰ� �����

#include <iostream>
using namespace std;

void maketime(int, int);

int main()
{
    int hour, min;
    cout << "Input Hour: ";
    cin >> hour;
    cout << "Input Minute: ";
    cin >> min;
    maketime(hour, min);
    return 0;
}

void maketime(int a, int b)
{
    cout << "Time : " << a << ":" << b << endl;
}