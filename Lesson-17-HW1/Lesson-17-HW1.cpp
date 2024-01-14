#include <Windows.h>
#include <vector>
#include "Employee.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<Employee> arr;
	arr.push_back(Employee("Иванов", 1985, "Админ", 25000, "Высшее"));
	arr.push_back(Employee("Алексеева", 1960, "Бухгалтер", 11000, "Среднее незаконченное"));
	arr.push_back(Employee("Петров", 1984, "Программист", 20000, "Среднее"));
	arr.push_back(Employee("Васильев", 1991, "Управляющий отделом", 22000, "Высшее"));
	arr.push_back(Employee("Александров", 2001, "Помощник админа", 10000, "Среднее"));

	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].showEmployee();
	}

	cout << "Работники старше 60 лет:\n";
	int counter = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (2024 - arr[i].getBirthYear() > 60)
		{
			counter++;
			arr[i].showEmployee();
		}
	}
	cout << "Всего " << counter << " работников старше 60 лет.";
}