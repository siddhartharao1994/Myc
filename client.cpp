#include"Complex.h"
#include<conio.h>

int main()
{
	Complex c1(1, 1);
	c1.display();
	Complex c2(3,3);
	c2.display();

	Complex c3;
	

	c3 = c1 + c2;
	c3.display();

	Complex c4;
	c4 = c2 - c1;//c2.operator-(c1)
	c4.display();

	Complex c5(1, 1), c6;
	c6 = -c5;// c6=c5.operator-();
	c6.display();
	c5.display();

	Complex c7(1, 1), c8;
	c8 = ++c7;
	c7.display();
	c8.display();

	Complex c9(1, 1), c10;
	c10 =c9++; //c10=c9.operator++();
	c9.display();
	c10.display();

	_getch();
	return 0;
}