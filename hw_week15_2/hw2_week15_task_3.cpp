/* �������� �������, ������� ��������� � ������ 
� ��������� ������� �������� ������.*/

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void add_symbol_in_pos(string& s, string& c, int& h) {

    s.insert((h - 1), c);
    cout << "���������: " << s << endl;

    return;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������� ����� ��������: " << endl;
    string s;
    getline(cin, s);

    string c;
    cout << "������� c�����, ������� ������ ��������: " << endl;
    cin >> c;

    int h;
    do {
        cout << "������� ����� �������, � ������� ������ �������� ������: " << endl;
        cin >> h;
    } while (h < 1 || h > (s.length() + 1));

    add_symbol_in_pos(s, c, h);

    return 0;
}