/* ���� ������ � ���� �� ���������� ������. 
��� ���������� ������ ������ ���������� ������, 
��������� �� ���� � �������� �� ������������� ����� 
�������. ���� = 3*/
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* file2;

	const char* path2 = R"(C:\Users\Evgeniy\Desktop\putfile.txt)";

	char arr1[] = "����� �� ��� ���� ������ ����������� �����, �� ����� ���.";
	cout << arr1 << endl;

	const int key = 3;

	for (int i = 0; i < strlen(arr1); i++) {
		if (arr1[i] == '�')
			arr1[i] = '�';

		else if (arr1[i] == '�')
			arr1[i] = '�';

		else if (arr1[i] == '�')
			arr1[i] = '�';

		else if (arr1[i] == '�')
			arr1[i] = '�';

		else if (arr1[i] >= '�' && arr1[i] <= '�')
			arr1[i] += key - 1;

		else if (arr1[i] >= '�' && arr1[i] <= '�')
			arr1[i] += key - 1;

		else if (arr1[i] >= '�' && arr1[i] <= '�') {
			arr1[i] += key;

			if (arr1[i] > '�')
				arr1[i] += '�';
		}

		else if (arr1[i] >= '�' && arr1[i] <= '�') {
			arr1[i] += key;

			if (arr1[i] > '�')
				arr1[i] += '�';
		}
	}

	cout << arr1 << endl;



	if ((fopen_s(&file2, path2, "w")) != NULL)
		cout << "This file is not exist!";

	else {
		fprintf(file2, "������������� ���������: "); fprintf(file2, "%s", arr1);

		fclose(file2);
	}
	cout << "\n\n\t ���� ������� ������� � ����" << endl;

	return 0;

}