#include<iostream>
using namespace std;

class Employee
{
private:
	int empid;
	char name[10];
	double salary;
	static int count;
public:
	Employee();
	Employee(const char*, double);
	void accept();
	void display();
	static int getTotalEmpCount();
};