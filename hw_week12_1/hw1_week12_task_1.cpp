/*�������� �������, ������� ��������� ��� ���� (�.�. ������� ��������� ����� ����������) � 
��������� �������� � ���� ����� ����� ������. ��� ������� ���� ������ ���������� ����� 
�������� �������, ������� ����������, �������� �� ��� ����������.*/
#include <iostream>
#include <windows.h>
using namespace std;

bool is_vis(int year) {
	bool answ;

	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? answ = true : answ = false;

	return answ;
}

int sum_days_date(int d, int m, int y) {
	int sumdays = d;

	switch (m - 1) {
	case 12: sumdays += 31;
	case 11: sumdays += 30;
	case 10: sumdays += 31;
	case  9: sumdays += 30;
	case  8: sumdays += 31;
	case  7: sumdays += 31;
	case  6: sumdays += 30;
	case  5: sumdays += 31;
	case  4: sumdays += 30;
	case  3: sumdays += 31;
	case  2: is_vis(y) ? sumdays += 29 : sumdays += 28;
	case  1: sumdays += 31;
	}
	
	sumdays += (y - 1) * 365 + ((y - 1) / 4);

	return sumdays;
}

int diff_between(int d1, int m1, int y1, int d2, int m2, int y2) {
	int diff = sum_days_date(d2, m2, y2) - sum_days_date(d1, m1, y1);

	(diff < 0) ? diff = -diff : diff; // ������� �����

	return diff;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int f_day, f_mnth, f_year;
	int s_day, s_mnth, s_year;
	int exit;

	do {
	d1: //1
		cout << "������� ������ ����: ";
		cin >> f_day;

		if (f_day <= 0 || f_day > 31) {
			cout << "� ������ �� ����� 31 ���" << endl;
			goto d1; //1
		}

	m1: //2
		cout << "������� ������ �����: ";
		cin >> f_mnth;

		if (f_mnth <= 0 || f_mnth > 12) {
			cout << "� ���� �� ����� 12 �������" << endl;
			goto m1; //2
		}

		if (f_mnth == 2 && (f_day > 29 || f_day <= 0)) {
			cout << "� ������� �� ����� 29 ����" << endl;
			goto d1; //1
		}

		if ((f_mnth == 4 || f_mnth == 6 || f_mnth == 9 || f_mnth == 11) && (f_day == 31 || f_day <= 0)) {
			cout << "� ������, ����, ��������, ������ �� ����� 30 ����" << endl;
			goto d1; //1
		}

	y1: //3
		cout << "������� ������ ���: ";
		cin >> f_year;

		if (f_year <= 0 || f_year > 9999) {
			cout << "������� ������������ ����" << endl;
			goto y1; //3
		}

		if (is_vis(f_year) == false && f_day > 28 && f_mnth == 2) {
			cout << "� �� ���������� ���� � ������� 28 ����" << endl;
			goto d1; //1
		}


	d2: //4
		cout << "������� ������ ����: ";
		cin >> s_day;

		if (s_day <= 0 || s_day > 31) {
			cout << "� ������ �� ����� 31 ���" << endl;
			goto d2; //4
		}

	m2: //5
		cout << "������� ������ �����: ";
		cin >> s_mnth;

		if (s_mnth <= 0 || s_mnth > 12)
			goto m2; //5

		if (s_mnth == 2 && (s_day > 29 || s_day <= 0)) {
			cout << "� ������� �� ����� 29 ����" << endl;
			goto d2; //4
		}

		if ((s_mnth == 4 || s_mnth == 6 || s_mnth == 9 || s_mnth == 11) && (s_day == 31 || s_day <= 0)) {
			cout << "� ������, ����, ��������, ������ �� ����� 30 ����" << endl;
			goto d2; //4
		}

	y2: //6
		cout << "������� ������ ���: ";
		cin >> s_year;

		if (s_year <= 0 || s_year > 9999) {
			cout << "������� ������������ ����" << endl;
			goto y2; //6
		}

		if (is_vis(s_year) == false && s_day > 28 && s_mnth == 2) {
			cout << "� �� ���������� ���� � ������� 28 ����" << endl;
			goto d2; //4
		}

		cout << "������� ����� ������: "
			<< diff_between(f_day, f_mnth, f_year, s_day, s_mnth, s_year) << " ����" << endl;

		cout << endl << "���� ������ ���������� ������� 1, ����� 0: ";
		cin >> exit;

	} while (exit != 0);

	return 0;
}