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

	Fraction a, b;
	a.ShowFraction();
	b.ShowFraction();
	Fraction c, d;
	cout << "\na + b = ";
	c = a + b;	//работает перегрузка оператор+
	c.ShowFraction();
	d = a - b;
	cout << "a - b = ";
	d.ShowFraction();



	_getch();
}
