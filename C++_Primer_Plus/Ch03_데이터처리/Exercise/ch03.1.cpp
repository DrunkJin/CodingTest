// ch03.1.cpp -- Ű�� ������ ��Ƽ���� ������ ���� �� ���� ���Ϳ� ��Ƽ���� ������ ��ȯ�ϴ� ������ ���α׷��� �ۼ��϶�. 
// �Է��ؾ� �� ���� ����ڿ��� �����ϱ� ���� ���� ���ڸ� ����ϰ� ȯ�� �μ��� const ��ȣ ����� ����϶�

#include <iostream>
int main()
{
    using namespace std;
    const int meter_to_centi = 100;

    cout << "��ȯ�� ��Ƽ���͸� �Է��ϼ���. (������): _____ \b\b\b\b\b" << endl;
    
    long centimeter;
    cin >> centimeter;

    cout << "�Է��� " << centimeter << "(cm)�� ";
    cout << centimeter / meter_to_centi << "." << centimeter % meter_to_centi << "(m)�Դϴ�." << endl;
}

// ��ȯ�� ��Ƽ���͸� �Է��ϼ���. (������): _____ 
// 14320
// �Է��� 14320(cm)�� 143.20(m)�Դϴ�.