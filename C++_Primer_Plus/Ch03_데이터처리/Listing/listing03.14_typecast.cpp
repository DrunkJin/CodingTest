// typecast.cpp -- ���� �������� ��ȯ
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;      // �ٴٿ���, ����, �˵տ���

    // ���� ������ �� ���� double������ �����Ŀ�
    // �� ���� int������ ��ȯ�Ͽ� �����Ѵ�.
    auks = 19.99 + 11.99;       

    // ���� �� ������ �� ���� int������ ��ȯ�� �Ŀ� ���Ѵ�.
    bats = (int) 19.99 + (int) 11.99;       // ���� C��Ÿ��
    coots = int (19.99) + int (11.99);      // �Ž� C++��Ÿ��
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots <<endl;

    char ch = 'Z';
    cout << "CODE " << ch << "Value is ";    // char������ ���
    cout << int (ch) << endl;                // int������ ���
    cout << "Yes, CODE Z's value is ";
    cout << static_cast<int> (ch) <<endl;    // int������ ���
    return 0;
}

// 11.99 + 19.99 = 31.98�ε� �Ҽ��θ� �����ϱ� auks�� 31
// �����ͺ�ȯ�ڸ� ����ϸ� �Ҽ��θ� ������ ����Ͽ� 19+11 = 30
// �����𵨸��� �ʿ��Ҷ� ����. ������ ����ȭ�� ����ȭ�Ѵ����� ���ϴ°Ŷ� ���̰� ���������