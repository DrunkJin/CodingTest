// ch02.4.cpp
// ������� ���� �Է��� �䱸�ϴ� ���α׷� �ۼ��ϰ� �� ���̸� ������ ��Ÿ������ ���â��

#include <iostream>
int agetomonth(int);

int main()
{
    using namespace std;
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Your age convert to months : " << agetomonth(age) << endl;
    return 0;
}

int agetomonth(int n)
{
    return n * 12;
}