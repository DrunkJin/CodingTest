// ch03.3.cpp -- ������ ����, �а�, �ʰ� ������ ��û�Ͽ� 10���� �������� ����ϴ� ���α׷��� �ۼ��϶�.
// 1�а��� 60�ʰ��̴�. 1������ 60�а��̴�. �̵��� ��ȣ����� ǥ���϶�.
// ������ �Է°��� ���� ������ ������ ����� ��

#include <iostream>

using namespace std;
int main()
{
    const double MIN_TO_SEC = 60;
    const double DEGREE_TO_MIN = 60;
    int degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds :" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    
    double answer = degrees + (minutes / MIN_TO_SEC) + double (seconds / DEGREE_TO_MIN / MIN_TO_SEC);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    cout << answer << " degrees" << endl;
    return 0;   
    
}


// Enter a latitude in degrees, minutes, and seconds :
// First, enter the degrees: 37
// Next, enter the minutes of arc:51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees