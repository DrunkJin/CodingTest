// ch02.6.cpp
// ������ �޾Ƽ� õ�������� ��ȯ�ϴ� ���α׷������. ����������Լ��� ����. 1���� = 63240. double�� ���� ���

#include <iostream>

double convert(double);

int main()
{
    using namespace std;

    double ly, au;      // ly : light year, au : astronaut unit
    cout << "���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
    cin >> ly;
    au = convert(ly);
    cout << ly
         << "������ "
         << au
         << "õ�� �����Դϴ�."
         << endl;
    return 0;
}

double convert(double k)
{
    return k * 63240;
}