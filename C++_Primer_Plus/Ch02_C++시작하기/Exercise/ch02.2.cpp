//  ch02.2.cpp 
// �Ÿ��� ���� ���� ������ �Է��� �䱸�ϰ� �װ��� ų�ι��� ������ ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�. (1������ 1.60934ų�ι����̴�.)
#include <iostream>
double miletokm(double);

int main()
{
    using namespace std;
    
    double mile;
    cout << "ų�ι���(km)�� ��ȯ�ϰ� ���� ����(mile) �Է�: ";
    cin >> mile;
    cout << "�Է��Ͻ� " << mile
         << "mile�� "
         << miletokm(mile)
         << "km�Դϴ�."
         << endl;
    return 0;
}

double miletokm(double n)
{
    return n * 1.60934;
}