// ch02.3.cpp
// ������ ����� �����Լ��� ���� ��°�� ����� �ϳ��� 2���� ȣ���ؼ� ���
#include <iostream>

void first();
void second();

int main()
{
    first();
    first();
    second();
    second();
    return 0;
}

void first()
{
    using namespace std;

    cout << "Three blind mice" << endl;
}


void second()
{
    using namespace std;

    cout << "See how they run" << endl;
}