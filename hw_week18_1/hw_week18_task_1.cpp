/*�������� ���������, ������� ���� ������������ ������ 5 ������� ���������, � ����� ��������� �� 
�� �����������.*/
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, j;
	const int STUDENTS_COUNT = 5;

	string *students_list = new string[STUDENTS_COUNT];
	 

	for (i = 0; i < STUDENTS_COUNT; i++) {
		cout << "������� ������� ��������: ";
		cin >> students_list[i];
	}


	for (i = 0; i < STUDENTS_COUNT; i++) {
		for (j = 1; j < STUDENTS_COUNT; j++) {
			if (students_list[j - 1].length() > students_list[j].length())
				swap(students_list[j - 1], students_list[j]);
		}
	} cout << endl;


	cout << "����� ������� ��������� �� �����������: " << endl;
	for (i = 0; i < STUDENTS_COUNT; i++)
		cout << "������� #" << i + 1 << " " << students_list[i] << endl;


	delete[] students_list;

	return 0;
}
			