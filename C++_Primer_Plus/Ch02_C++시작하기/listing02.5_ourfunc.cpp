// ourfunc.cpp -- ����ڰ� �ۼ��ϴ� �Լ��� �����Ѵ�.
#include <iostream>
void simon(int);        // simon()�� ���� �Լ� ����

int main()
{
    using namespace std;
    simon(3);
    cout << "������ �ϳ� ���ÿ�: ";  // ���� ���� endl�� �־ ������ ���� �ʾƼ� �����Է��� �����ϰ� ����
    int count;
    cin >> count;
    simon(count);       // simon() �Լ��� �ٽ� ȣ���Ѵ�.
    cout << "��!" << endl;
    return 0;
}

void simon(int n)       // simon() �Լ��� �����Ѵ�.
{
    using namespace std;
    cout << "Simon ��, �߰����� " << n << "�� �ε����." << endl;
}                       // void�� �Լ����� return ������ �ʿ����.

// void�� �Լ��� return���� ���� ������ 
// simon(3) ó�� �ܵ����� ����� ���� ������
// example = simon(3) �̷��� ����� ���� ����.
// using namespace std; �̰� #include <iostream> �Ʒ��� �����ϸ� �� ���Ͽ� �ִ� ��� �Լ� ���ǿ� ������ �ش�.
// �׷��� ����ϴ� �Լ����� �����ϴ� ���� �� ȿ�����̱� ��
// using namespace std;�� �Ⱦ��� 
// std::cout << "std �̸� ������ cout�� endl�� ���" << std::endl;
// ���Ͱ��� ��� ����