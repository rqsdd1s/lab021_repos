// Lab_02.cpp
// Мигович В'ячеслав
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double z1;
    double z2;

    cout << "a = ";
    cin >> a;

    z1 = pow(
        (1 + a + pow(a, 2)) / (2 * a + pow(a, 2))
        + 2
        - (1 - a + pow(a, 2)) / (2 * a - pow(a, 2)),
        -1
    ) * (5 - 2 * pow(a, 2));

    z2 = (4 - pow(a, 2)) / 2;

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}