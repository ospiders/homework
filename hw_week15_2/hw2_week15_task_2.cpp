/*�������� �������, ������� ������� �� ������ 
��� ��������� � ��� ��������� �������.*/

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void del_symbol(string& s, int& c) {

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == (char)c) {
            s.erase(s.begin() + i);
            i--;
        }
    }

    return;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string s;
    cout << "������� ����� ��������: ";
    getline(cin, s);

    cout << "\n48 - 57 �����" << endl
         << "65 - 90 ���������� ��������� �����" << endl
         << "97 - 122 ���������� �������� �����" << endl
         << "192 - 223 ������� ��������� �����" << endl
         << "224 - 255 ������� �������� �����" << endl;

    int ch; 
    cout << "\n������� ����� �������, ������� ������ �������: ";
    cin >> ch;

    del_symbol(s, ch);

    cout << "\n������� " << (char)ch << " ������� �� ������ " << "'" << s << "'" << endl;

    return 0;
}