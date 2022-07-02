/*�������� �������, ������������ ���������� �������������, ������������� � ������� 
��������� ������������� �� �������.*/
#include <iostream>
#include <windows.h>
using namespace std;

void show_plus_minus_zero(int m[], int s) {
	int minus_count = 0;
	int plus_count = 0;
	int zero_count = 0;

	for (int i = 0; i < s; i++) {
		if (m[i] < 0) minus_count++;

		else if (m[i] > 0) plus_count++;

		else zero_count++;
	}

	cout << "���������� ������������� ���������: " << minus_count << endl
		 << "���������� ������������� ��������: " << plus_count << endl
		 << "���������� ��������� � ������� ���������: " << zero_count << endl;

	return;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 10;
	int mas[size]{ };
	int exit;

	cout << "��������� ������ � �������� � " << size << " �����" << endl; 
	do {
		for (int i = 0; i < size; i++) {
			cout << "������� " << i + 1 << " �����: ";
			cin >> mas[i];
		}

		show_plus_minus_zero(mas, size);

		cout << endl << "���� ������ ���������� ������� 1, ����� 0: ";
		cin >> exit; cout << endl;

	} while (exit != 0);

	return 0;
}