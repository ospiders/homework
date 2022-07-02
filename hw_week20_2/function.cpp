/*� ����� function.cpp ���������� �������� ��������� 
������� ��� ������ � �������� ������:
a) ������� ��� ���������� ������� ���������� ����������;
b) ������� ��� ������ �������� ������� �� ������� ;
c) ������� ��� ������ ������������ ��������;
d)������� ��� ������ ������������� ��������;
e) ������� ��� ����������;
f) ������� ��� �������������� �������� �������.

������ ������� ���������� �������� ��� ������ 
� �������� �����, �������������� � ���������� 
��������. (��� ������� ���� �������� ��������� 
�������)*/
#include<iostream>
#include<iomanip>
#include<time.h>

void Fill_Random_ValuesInt(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 50;

	return;
}

void Fill_Random_ValuesDouble(double arr[], int size)
{
	for (int i = 0; i < size; i++) 
		arr[i] = (double)(rand() % (50 * 10) / 10.0);

	return;
}

void Fill_Random_ValuesChar(char arr[], int size)
{
	for (int i = 0; i < size; i++) 
		arr[i] = 65 + (char)(rand() % (90 - 65 + 1));

	return;
}

void Show_ArrInt(int arr[], int size)
{
	std::cout << "����� ������� int\n";
	for (int i = 0; i < size; i++)
		std::cout << std::left << std::setw(3) << arr[i] << " ";

	std::cout << "\n\n";
	return;
}

void Show_ArrDouble(double arr[], int size)
{
	std::cout << "����� ������� double\n";
	for (int i = 0; i < size; i++)
		std::cout << std::left << std::setw(3) << arr[i] << " ";

	std::cout << "\n\n";
	return;
}

void Show_ArrChar(char arr[], int size)
{
	std::cout << "����� ������� char\n";
	for (int i = 0; i < size; i++)
		std::cout << std::left << std::setw(3) << arr[i] << " ";

	std::cout << "\n\n";
	return;
}


void Find_Min_Max_ValueInt(int arr[], int size)
{
	int max = 0, min = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	std::cout << "����������� �����: " << min << " ������������ �����: " << max << "\n\n";
	return;
}

void Find_Min_Max_ValueDouble(double arr[], int size)
{
	double max = 0, min = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	std::cout << "����������� �����: " << min << " ������������ �����: " << max << "\n\n";
	return;
}

void Find_Min_Max_ValueChar(char arr[], int size)
{
	char max = 0, min = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	std::cout << "����������� �����: " << min << " ������������ �����: " << max << "\n\n";
	return;
}

void Sort_ArrInt(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size; j++) {
			if (arr[j - 1] < arr[j])
				std::swap(arr[j - 1], arr[j]);
		}
	}
	return;
}

void Sort_ArrDouble(double arr[], int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size; j++) {
			if (arr[j - 1] < arr[j])
				std::swap(arr[j - 1], arr[j]);
		}
	}
	return;
}

void Sort_ArrChar(char arr[], int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size; j++) {
			if (arr[j - 1] < arr[j])
				std::swap(arr[j - 1], arr[j]);
		}
	}
	return;
}

void Replace_Value_In_ArrInt(int arr[], int size)
{	
	std::cout << "������� ������ �������, ��� ������ ��������: ";
	int key;
	std::cin >> key;

	std::cout << "������� ��������: ";
	int value;
	std::cin >> value;

	for (int i = 0; i < size; i++) {
		if (key == i)
			arr[i] = value;
	} std::cout << "\n";
	return;
}

void Replace_Value_In_ArrDouble(double arr[], int size)
{
	std::cout << "������� ������ �������, ��� ������ ��������: ";
	int key;
	std::cin >> key;

	std::cout << "������� ��������: ";
	double value;
	std::cin >> value;

	for (int i = 0; i < size; i++) {
		if (key == i)
			arr[i] = value;
	} std::cout << "\n";
	return;
}

void Replace_Value_In_ArrChar(char arr[], int size)
{
	std::cout << "������� ������ �������, ��� ������ ��������: ";
	int key;
	std::cin >> key;

	std::cout << "������� ��������: ";
	char value;
	std::cin >> value;

	for (int i = 0; i < size; i++) {
		if (key == i)
			arr[i] = value;
	} std::cout << "\n";
	return;
}

