/*�������� �������, ������� �������� � �������� ���������� 2 ����� ����� � ���������� ����� 
����� �� ��������� ����� ����*/
#include <iostream>
#include <windows.h>
using namespace std;

template<typename T1> T1 sumAll(T1 a, T1 b) {
	T1 res = a;

	while (a < b) {
		res += a + 1;
		a++;
	}
	return res;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int first_num, second_num, exit;

	do {
		cout << "|��������� ��� ���������� ����� ����� �� ��������� ����� ����|" << endl;
		cout << "������� ������ �����: ";
		cin >> first_num;
		cout << "������� ������ �����: ";
		cin >> second_num;

		cout << "����� ����� � ��������� ����� ������� " << first_num << " � " << second_num << " = " << sumAll(first_num, second_num) << endl;

		cout << endl << "���� ������ ���������� ������� 1, ����� 0: ";
		cin >> exit; cout << endl;

	} while (exit != 0);

	return 0;
}