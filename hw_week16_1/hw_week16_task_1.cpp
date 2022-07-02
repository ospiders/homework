#include <iostream>
#include <windows.h>
#include <string>
#include <charconv>
using namespace std;


/*������� ���������� ��� ������, � , ���� ������ ����� 
���������� 0, ���� ������ ������ ������ ������, �� ���������� 1, ����� �1.*/
int mystrcmp(const char* str1, const char* str2);

/*������� ������������ ������ � ����� � ���������� ��� �����*/
int StringToNumber(char* str);

/*������� ������������ ����� � ������ � ���������� ��������� �� ��� ������*/
char* NumberToString(int number);

/*������� ����������� ������ � ������� �������*/
char* Uppercase(char* str1);

/*������� ����������� ������ � ������ �������*/
char* Lowercase(char* str1);

/*������� ����������� ������ � ���������� ��������� �� ����� ������*/
char* mystrrev(char* str);


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "1. ���������� mystrcmp" << endl;
	char str11[] = { "test1" };
	char str22[] = { "test2" };
	char str33[] = { "test12" };

	cout << "���� " << str11 << " == " << str22 << " = 0 || ��������� = " << mystrcmp(str11, str22) << endl;
	cout << "���� " << str33 << " > " << str22 << " = 1 || ��������� = " << mystrcmp(str33, str11) << endl;
	cout << "���� " << str11 << " < " << str33 << " = -1 || ��������� = " << mystrcmp(str11, str33) << endl << endl;


	cout << "2. ���������� StringToNumber" << endl;
	char str[] = { "43" };
	cout << "char " << str << " (" << &str << ")";
	int num = StringToNumber(str);
	cout << " = int " << num << " (" << &num << ")" << endl << endl;


	cout << "3. ���������� NumberToString" << endl;
	int num1 = 32;
	cout << "int " << num1 << " (" << &num1 << ")";
	char* p_str1 = NumberToString(num1);
	cout << " = char* " << p_str1 << " (" << &p_str1 << ")" << endl << endl;


	cout << "4.���������� Uppercase" << endl;
	char str2[] = {"���������"};
	cout << "char " << str2 << " (" << &str2 << ")";
	char* p_str2 = Uppercase(str2);
	cout << " = char* " << p_str2 << " (" << &p_str2 << ")" << endl << endl;


	cout << "5. ���������� Lowercase" << endl;
	char str3[] = { "���������" };
	cout << "char " << str3 << " (" << &str3 << ")";
	char* p_str3 = Lowercase(str3);
	cout << " = char* " << p_str3 << " (" << &p_str3 << ")" << endl << endl;


	cout << "6. ���������� mystrrev" << endl;
	char str4[] = { "���������12" };
	cout << "char " << str4 << " (" << &str4 << ")";
	char* p_str4 = mystrrev(str4);
	cout << " = char* " << p_str4 << " (" << &p_str4 << ")" << endl << endl;

	return 0;
}

int mystrcmp(const char* str1, const char* str2) 
{
	if (strlen(str1) > strlen(str2))
		return 1;

	else if (strlen(str1) < strlen(str2))
		return -1;

	else
		return 0;
}

int StringToNumber(char* str) 
{
	int res = 0;

	for (int i = 0; i < strlen(str); i++) {
		res *= 10;
		res += int(str[i]) - 48;
	}

	return res;
}

char* NumberToString(int number) 
{
	int size_of_num = 0;
	int tmp_number = number;

	while (tmp_number != 0) {
		tmp_number /= 10;
		size_of_num++;
	}


	int tmp;
	char* res = new char[size_of_num + 1]();

	for (int i = 0; i < size_of_num; i++) {
		tmp = number % 10;
		number /= 10;
		res[i] = tmp + '0';
	}

	char* p_res = mystrrev(res);

	return p_res;
}

char* Uppercase(char* str1) 
{
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] >= '�' && str1[i] <= '�')
			str1[i] = (char)('�' + (str1[i] - '�'));
	}

	return str1;
}

char* Lowercase(char* str1) 
{
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] >= '�' && str1[i] <= '�')
			str1[i] = (char)('�' + (str1[i] - '�'));
	}
	return str1;
}

char* mystrrev(char* str) 
{
	int N = strlen(str);

	for (int i = 0; i < N / 2; i++)
		swap(str[i], str[(N - 1) - i]);

	return str;
}