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

    cout << "������� ����� ��� ������������: ";
    cin >> a >> b;
    cout << "����� �����: " << a + b << endl;
    return 0;
}
