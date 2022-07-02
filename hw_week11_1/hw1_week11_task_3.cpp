/*����� ���������� �����������, ���� ����� ���� ��� ��������� ����� ��� ������. �������� 
������� ������ ����� ����� �� ��������� ���������.*/

#include <iostream>
#include <windows.h>
using namespace std;

template<typename T1> T1 perfect_num(T1 num) {
	T1 res = 0;

	for (int i = 1; i < num; i++) {
			if (num % i == 0)
				res += i;
	}
	return res;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num = 1;
	cout << "������� ������������������ ����� �����, ��������������� ������ 0" << endl;

	while (num != 0) {
		cout << "������� �����: ";
		cin >> num;

		if (perfect_num(num) == num && num != 0)
			cout << "������� ����������� �����: " << num << endl;

		else if (num == 0) 
			cout << "���������� ���������";

		else
			cout << "����� " << num << " �� �����������" << endl;
	}

	return 0;
}