// hexoct2.cpp -- ���� 16������ 8������ ���÷����Ѵ�.
#include <iostream>
using namespace std;
int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "�մ� ���Ŵ� �Ѹ���� �����ݴϴ�!\n";
    cout << "�����ѷ� " << chest << " (10����)" << endl;
    cout << hex;            // ������ �ٲٴ� ������
    cout << "�㸮�ѷ� " << waist << " (16����)" << endl;
    cout << oct;            // ������ �ٲٴ� ������
    cout << "�ٸ����� " << inseam << " (8����)" << endl;
    return 0;
}

// using namespace std�� �����ϸ� std::cout, std::endl, std::hex, std::oct�� ���� ����ϸ� ��