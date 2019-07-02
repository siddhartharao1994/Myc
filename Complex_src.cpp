#include"Complex.h"

Complex::Complex()
{
	this->real = 0.0;
	this->imag = 0.0;
}
Complex::Complex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}
void Complex::accept()
{
	cout << "\nEnter the real part::";
	cin >> this->real;
	cout << "\n Enter the imag part::";
	cin >> this->imag;
}

void Complex::display()
{
	cout << "\n The complex number is "
		<< this->real << "+" << this->imag << "i";
}

Complex Complex::operator+(Complex& c)
{
	Complex temp;
	temp.real = this->real + c.real;//c1->real+c2->real
	temp.imag = this->imag + c.imag;
	return temp;
}
Complex Complex::operator-(Complex& c)
{
	Complex temp;
	temp.real = this->real - c.real;
	temp.imag = this->imag - c.imag;
	return temp;
}
Complex Complex::operator-()
{
	Complex temp;
	temp.real = -this->real;
	temp.imag = -this->imag;
	return temp;
}
Complex Complex::operator++()
{
	this->real = this->real + 1;
	this->imag = this->imag + 1;
	return *this;
}
Complex Complex ::operator++(int)
{
	Complex temp = *this;
	this->real = this->real + 1;
	this->imag = this->imag + 1;
	return temp;
}

