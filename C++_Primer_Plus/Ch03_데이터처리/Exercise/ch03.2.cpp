// ch03.2.cpp -- Ű�� ��Ʈ�� ��ġ ������ ���� ü���� �Ŀ�� ������ ���� ���α׷��ۼ�
// ������ ������ ����
// BMI�� ����Ͽ� �����ؾ���. ���� ȯ���μ��� ���� ��ȣ ����� ����� ��

#include <iostream>

using namespace std;

int main()
{   
    const int feet_to_inch = 12;
    const double inch_to_meter = 0.0254, pound_to_kg = 2.2;
    
    int height_feet, height_inch;
    double weight;
    cout << "����� Ű���� ��Ʈ �κи� �Է����ּ���. " ;
    cin >> height_feet;
    cout << "����� Ű���� ��ġ �κи� �Է����ּ���. ";
    cin >> height_inch;
    cout << "����� ������(�Ŀ��)�� �Է����ּ���. ";
    cin >> weight;
    
    double height_meter = (height_feet * feet_to_inch + height_inch) * inch_to_meter;
    double weight_kg = (weight/pound_to_kg);
    cout << "����� BMI�� ";
    cout << weight_kg / height_meter * height_meter;
    cout << "�Դϴ�." << endl;
    return 0;
}
