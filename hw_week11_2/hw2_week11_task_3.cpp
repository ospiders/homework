/*�������� ������� ��� �������� �����, ����������� � �������� ����, 
� ���������� �������������.*/
#include <iostream>
using namespace std;

int binary_in_to_digit(char key[]);

int main() {
	setlocale(LC_ALL, "");

	cout << "������� �������� ���: ";
	char key[32];
	cin >> key;

	int number = binary_in_to_digit(key);

	cout << "����� " << key << " = " << number;

	return 0;
}

int binary_in_to_digit(char key[])
{
	int answer = 0;

	for (int i = 0; i < strlen(key); i++) {
		answer *= 2;
		answer += key[i] - '0';
	}

	return answer;
}