#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string surname;
	int birth_year;
	string position;
	float salary;
	string education;

public:
	Employee(string _surname, int _birth_year, string _position, float _salary, string _education);

	string getSurname()const;
	int getBirthYear()const;
	string getPosition()const;
	float getSalary()const;
	string getEducation()const;

	void setSurname(string _surname);
	void setBirthYear(int _birth_year);
	void setPosition(string _position);
	void setSalary(float _salary);
	void setEducation(string _education);

	void showEmployee()const;
};