/*������������ ������ ������ �������� � ������� ������, ��������� ������� ��� �� ����������� 
� ������.*/

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void del_symbol(string& s, char& c) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    cout << "��������� ���� ������ ���������� " << count << " ���" << endl;

    return;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������� ����� ��������: " << endl;
    string s;
    getline(cin, s);

    cout << "������� ������, ������� ������ �����: " << endl;
    char c;
    cin >> c;

    del_symbol(s, c);
    return 0;
}