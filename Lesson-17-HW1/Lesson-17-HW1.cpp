#include <Windows.h>
#include <vector>
#include "Employee.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<Employee> arr;
	arr.push_back(Employee("������", 1985, "�����", 25000, "������"));
	arr.push_back(Employee("���������", 1960, "���������", 11000, "������� �������������"));
	arr.push_back(Employee("������", 1984, "�����������", 20000, "�������"));
	arr.push_back(Employee("��������", 1991, "����������� �������", 22000, "������"));
	arr.push_back(Employee("�����������", 2001, "�������� ������", 10000, "�������"));

	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].showEmployee();
	}
}