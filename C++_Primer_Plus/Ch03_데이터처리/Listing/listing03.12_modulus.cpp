// modulus.cpp -- % �����ڸ� �̿��Ͽ� �Ŀ�带 �������� ��ȯ�Ѵ�.
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // ���� ��������
    int pounds = lbs % Lbs_per_stn;     // �������� �Ŀ���
    cout << lbs << " �Ŀ��� " << stone
         << " ����, " << pounds << " �Ŀ���Դϴ�.\n";
    return 0;
}


// int stone �κ��� int���̹Ƿ� ���� �������� �����Ѵ�.
// int pounds �κ��� ���� ���������� �������� ���ϴ� ���̴�.