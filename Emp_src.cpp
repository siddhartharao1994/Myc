#include"Employee.h"
#include<string.h>

int Employee::count = 100;

Employee::Employee()
{
	count++;
	this->empid =count;
	strcpy(this->name, "Unknown");
	this->salary = 0.0;
}
Employee::Employee(const char* name,
	double salary)
{
	count++;
	this->empid = count;
	strcpy(this->name, name);
	this->salary = salary;
}

void Employee::accept()
{
	cout << "\nenter the empid::";
	cin >> this->empid;
	cout << "\n Enter the name::";
	cin >> this->name;
	cout << "\n Enter the salary::";
	cin >> this->salary;
}

void Employee::display()
{
	cout << "\n The details are::";
	cout << "\n Empid-" << this->empid << endl;
	cout << "Name-" << this->name << endl;
	cout << "Salary-" << this->salary << endl;
}

int Employee::getTotalEmpCount()
{
	cout << this->name;
	return count - 100;
}