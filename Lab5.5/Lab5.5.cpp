#include <iostream>
#include <Windows.h>

using namespace std;

double f(int z, int x, int y, int& count);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, c, m;
    int count = 0;

    cout << "������ �������� 'a':"; cin >> a;
    cout << "������ �������� 'c':"; cin >> c;
    cout << "������ �������� 'm':"; cin >> m;
    double F = f(a, c, m, count);
    cout << "\n���������:" << F << endl;
    cout << "������� ������:" << count << endl;
    return 0;

}

double f(int a, int c, int m, int& count)
{
    count++;
    if (m >= 0 && m <= 9) return m;
    else
    {
        return double((a - m + c) % 10) * f(a, c, m - 1 - double((a - m + c) % 10), count) + m;
    }

}

