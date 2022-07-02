/*�������� ����������� ������� ���������� ����������� ������ �������� ���� ����� �����.
*/
#include <iostream>
#include <windows.h>
using namespace std;

template<typename T1> T1 func(T1 n1, T1 n2) { // ��� 1. 90 24  |  ��� 4. 24 18  |  ��� 7. 18 6  |  ��� 10. 6 0 
    if (n2 == 0)  // ��� 11. true
        return n1;
    if (n1 > n2) // ��� 2. true  |  ��� 5. true  |  ��� 8. true 
        return func(n2, n1 % n2); // ��� 3. 24  90 % 24 == 18  |  ��� 6. 18  24 % 18 == 6  |  ��� 9. 6  18 % 6 == 0
    else
        return func(n1, n2 % n1);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n1, n2;
    int exit;

    do {
        do {
            cout << "������� ������ �����: ";
            cin >> n1;
        } while (n1 == 0 || n1 < 0);

        do {
            cout << "������� ������ �����: ";
            cin >> n2;
        } while (n2 == 0 || n2 < 0);


        cout << "���������� ����� �����������: " << func(n1, n2) << endl;

        cout << endl << "���� ������ ���������� ������� 1, ����� 0: ";
        cin >> exit; cout << endl;

    } while (exit != 0);
    return 0;
}