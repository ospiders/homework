/*������������ ������ ������. ���������� ���������� ����, ���������� ���� � ���������� ��������� 
��������, �������������� � ������.*/

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void how_many_chars(string& s) {
    int nums = 0;
    int uppercase_en = 0;
    int lowercase_en = 0;
    int uppercase_rus = 0;
    int lowercase_rus = 0;
    int other = 0;

    for (int i = 0; i < s.length(); i++) {

        if ((int)s[i] > 47 && (int)s[i] < 58) 
            nums++;

        else if ((int)s[i] > 64 && (int)s[i] < 91) 
            uppercase_en++;

        else if ((int)s[i] > 96 && (int)s[i] < 123) 
            lowercase_en++;

        else if ((int)s[i] > 191 && (int)s[i] < 224) 
            uppercase_rus++;

        else if ((int)s[i] > 223 && (int)s[i] < 256) 
            lowercase_rus++;

        else 
            other++;
    }

    cout << "��������� ������ �������� ��������� �������: " << endl
        << nums << " ����" << endl
        << uppercase_en << " ���������� ��������� ����" << endl
        << lowercase_en << " ���������� �������� ����" << endl
        << uppercase_rus << " ������� ��������� ����" << endl
        << lowercase_rus << " ������� �������� ����" << endl
        << other << " ��������� ��������" << endl;

    return;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������� ����� ��������: " << endl;
    string s;
    getline(cin, s);

    how_many_chars(s);

    return 0;
}