// exceed.cpp -- ���� �Ѱ谪�� �ʰ��Ѵ�!
#include <iostream>
#define ZERO 0      // �� 0���� ��ü�� ��ȣ ��� ZERO ����
#include <climits>  // INT_MAX�� int���� �ִ밪���� ���ǵǾ�����

int main()
{
    using namespace std;
    short Dohee = SHRT_MAX;     // ������ �ִ밪���� �ʱ�ȭ
    unsigned short Insuk = Dohee;    // Dohee�� ���ǵǾ��ֱ� ������ �´� ����

    cout << "������ ���¿��� " << Dohee << "���� ����ְ� ";
    cout << "�μ����� ���¿��� " << Insuk << "���� ����ִ�." << endl;
    cout << "������ ���¿� 1���� �Ա��Ѵ�." << endl << "���� ";
    Dohee = Dohee + 1;
    Insuk = Insuk + 1;
    cout << "������ �ܰ�� " << Dohee << "���� �Ǿ���, ";
    cout << "�μ��� �ܰ�� " << Insuk << "���� �Ǿ���." << endl;
    cout << "���� ���ڱ� ���̳ʽ� �������� �ٲ����!" << endl << endl;
    Dohee = ZERO;
    Insuk = ZERO;
    cout << "������ ���¿��� " << Dohee << "���� ����ְ� ";
    cout << "�μ����� ���¿��� " << Insuk << "���� ����ִ�." << endl;
    cout << "������ ���¿� 1���� �����Ѵ�." << endl << "���� ";
    Dohee = Dohee - 1;
    Insuk = Insuk - 1;
    cout << "������ �ܰ�� " << Dohee << "���� �Ǿ���, ";
    cout << "�μ��� �ܰ�� " << Insuk << "���� �Ǿ���." << endl;
    cout << "�μ����� �ܰ� ���ڱ� ��������!" << endl;
    return 0;
}