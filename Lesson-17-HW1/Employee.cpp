#include "Employee.h"

Employee::Employee(string _surname, int _birth_year, string _position, float _salary, string _education)
{
    setSurname(_surname);
    setBirthYear(_birth_year);
    setPosition(_position);
    setSalary(_salary);
    setEducation(_education);
}

string Employee::getSurname() const
{
    return surname;
}

int Employee::getBirthYear() const
{
    return birth_year;
}

string Employee::getPosition() const
{
    return position;
}

float Employee::getSalary() const
{
    return salary;
}

string Employee::getEducation() const
{
    return education;
}

void Employee::setSurname(string _surname)
{
    if (_surname != "")
    {
        surname = _surname;
    }
}

void Employee::setBirthYear(int _birth_year)
{
    if (_birth_year != 0)
    {
        birth_year = _birth_year;
    }
}

void Employee::setPosition(string _position)
{
    if (_position != "")
    {
        position = _position;
    }
}

void Employee::setSalary(float _salary)
{
    if (_salary != 0)
    {
        salary = _salary;
    }
}

void Employee::setEducation(string _education)
{
    if (_education != "")
    {
        education = _education;
    }
}

void Employee::showEmployee() const
{
    cout << "|-------------------------------|\n\n";
    cout << "| Фамилия: " << surname << endl;
    cout << "| Год рождения: " << birth_year << endl;
    cout << "| Должность: " << position << endl;
    cout << "| Зарплата: " << salary << " грн\n";
    cout << "| Образование: " << education << endl;
    cout << "|-------------------------------|\n\n";
}