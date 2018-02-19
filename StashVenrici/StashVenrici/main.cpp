#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include "Point3d.h"
#include "Functions.h"
#include "Fraction.h"
#include "Student.h"


using namespace std;




void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Задание 1. В уже существующий класс “Дробь” добавьте перегрузку операторов
		сложения, инкремента и декремента.*/

	Fraction a(2,5), b(2,5);
	cout << "a = ";
	a.ShowFraction();
	cout << "b = ";
	b.ShowFraction();
	Fraction c, d;
	cout << "\na + b = ";
	c = a + b;	//работает перегрузка оператор+
	c.ShowFraction();
	d = a - b;
	cout << "a - b = "; //перегрузка оператора-
	d.ShowFraction();
	cout << "\n========================\n";
	++a;
	cout << "++a = ";
	a.ShowFraction();
	cout << "\n========================\n";
	--b;
	cout << "--b = ";
	b.ShowFraction();
	cout << "\n========================\n";
	a.setFraction(1, 2);
	b.setFraction(1, 2);
	Fraction x;
	x = a + b++;
	cout << "setting a = b = 1/2"<< endl << "a + b++ = ";
	x.ShowFraction();
	cout << "b++ = ";
	b.ShowFraction();

	cout << "\n========================\n";
	a.setFraction(1, 2);
	b.setFraction(1, 2);
	Fraction y;
	y = a + b--;
	cout << "setting a = b = 1/2" << endl << "a + b-- = ";
	y.ShowFraction();
	cout << "b-- = ";
	b.ShowFraction();






	_getch();
}
