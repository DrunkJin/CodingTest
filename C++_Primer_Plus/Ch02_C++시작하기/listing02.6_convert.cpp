// convert.cpp -- ������ �Ŀ��� ȯ���Ѵ�.
#include <iostream>
int stonetolb(int); // �Լ� ����
int main()
{
    using namespace std;
    int stone;
    cout << "ü���� ���� ������ �Է��Ͻÿ�: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << "������ ";
    cout << pounds << "�Ŀ���Դϴ�." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}

// stonetolb�� int�� ���ϰ��� �ֱ� ������ ����ó�� ���ϰ� ������ ���� ����� �����ϴ�.
// int aunt = stonetolb(10);
// int they = aunt + stonetolb(12);
// cout << "Total weight is " << stonetolb(20) << "pounds." << endl;
