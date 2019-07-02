#include<iostream>
using namespace std;

class Complex
{
private:
	double real, imag;
public:
	Complex();
	Complex(double, double);
	void accept();
	void display();
	Complex operator+(Complex&);//Complex addition(Complex&);
	Complex operator-(Complex&);
	Complex operator-();
	Complex operator++();//pre
	Complex operator++(int);//post


};