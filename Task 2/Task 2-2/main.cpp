#include <iostream>
using namespace std;
/**
 * \ brief ������� ������� ��� ��������� ������, ��� ��������� ��������
 * \ param x - �������� �������
 * \ param a- ��������� �������
 * \ return �������� ������� � ����� \a x.
 */

double getFunction1(const double x);

/**
* \ brief ������� ������� ��� ��������� ������ ��� ����� ���������� ��������
* \ param x - �������� �������
* \ param a- ��������� �������
* \ return �������� ������� � ����� \a x.
*/
double getFunction2(const double x, const double a);

/**
 * \ brief ����� ����� � ���������
 * \ return ���������� 0 � ������ ������
 */
int main()
{
    cout << "������� �������� x = ";
    double x = 0.0;
    cin >> x;

    const double THRESHOLD = 1;
    const double a = 3.5;

    if (x < THRESHOLD)
    {
        const double y = getFunction1(x);
        cout << " y = " << y;
    }
    else
    {
        const double y = getFunction2(x, a);
        cout << " y = " << y;
    }

    return 0;
}

double getFunction1(x)
{
    return log10(x + 1)
}

double getFunction2(x, a)
{
    return sin(2) * sqrt(| a * x | )
}
