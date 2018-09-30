#include <iostream>
#include <locale>
#include "Windows.h"

using namespace std;
int main()
{
    double a,b;
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    cout << "Введите числа для суммирования: ";
    cin >> a >> b;
    cout << "Сумма равна: " << a + b << endl;
    return 0;
}
