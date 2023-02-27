// limits.cpp -- ���� �Ѱ谪
#include <iostream>
#include <climits>  // ���� C++���� limits.h�� ����Ѵ�.
int main()
{
    using namespace std;
    int n_int = INT_MAX;            // n_int�� int���� �ִ밪���� �ʱ�ȭ
    short n_short = SHRT_MAX;       // limits.h ���Ͽ� ���ǵ� ��ȣ ���
    long n_long = LONG_MAX;         
    long long n_llong = LLONG_MAX;

    // sizeof �����ڴ� ���������̳� ������ ũ�⸦ �˾Ƴ���.
    cout << "int�� " << sizeof (int) << " ����Ʈ�̴�." << endl;     // sizeof�� ���ÿ� �������� �̸��� �� ���� ��ȣ�� �����
    cout << "short�� " << sizeof n_short << " ����Ʈ�̴�." << endl;
    cout << "long�� " << sizeof n_long << " ����Ʈ�̴�." << endl << endl;
    cout << "long long�� " << sizeof n_llong << " ����Ʈ�̴�." << endl;
    cout << endl;
    
    cout << "�ִ�:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl << endl;
    cout << "long long: " << n_llong << endl << endl;
    cout << "int�� �ּڰ�= " << INT_MIN << endl;
    cout << "����Ʈ�� ��Ʈ �� = " << CHAR_BIT << endl;
    return 0;
}

// int�� 4 ����Ʈ�̴�.
// short�� 2 ����Ʈ�̴�.
// long�� 4 ����Ʈ�̴�.

// long long�� 8 ����Ʈ�̴�.

// �ִ�:
// int: 2147483647
// short: 32767
// long: 2147483647

// long long: 9223372036854775807

// int�� �ּڰ�= -2147483648
// ����Ʈ�� ��Ʈ �� = 8