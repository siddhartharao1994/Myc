#include"Employee.h"
#include<conio.h>

int main()
{
//char str[10] = "King";
	Employee e1;
	e1.display();
	cout << "\n Total Employees are " 
		<< Employee::getTotalEmpCount();
	Employee e2("King", 45000);
	e2.display();
	cout << "\n Total Employees are "
		<< Employee::getTotalEmpCount();

	_getch();
	return 0;
}