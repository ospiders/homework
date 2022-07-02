/*�������� �������, ����������� �������� 
��������� ������ ��������� ����� � ���������� �������.*/
#include <iostream>
using namespace std;

void binary_search(int mas[], int size, int key);

int main() {
	setlocale(LC_ALL, "");

	const int N = 5;
	int mas[N]{ 0 };

	cout << "��������� ������ �������: " << endl;
	for (int i = 0; i < N; i++)
		cin >> mas[i];

	cout << "������� ���� ��� ������ � �������: ";
	int key;
	cin >> key;

	binary_search(mas, N, key);

	return 0;
}

void binary_search(int mas[], int size, int key)
{	
	int l = 0, r = size - 1;
	int mid;

	while (l <= r) {
		mid = (l + r) / 2;

		if (mas[mid] == key) {
			cout << "\n������� ���������� � �������: " << mas[mid] << endl;
			return;
		}

		if (mas[mid] > key)
			r = mid - 1;

		else
			l = mid + 1;
	}

	cout << "\n���������� �� �������!" << endl;
	return;
}