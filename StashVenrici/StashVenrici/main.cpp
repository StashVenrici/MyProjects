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

	/*������� 1. � ��� ������������ ����� ������� �������� ���������� ����������
		��������, ���������� � ����������.*/

	Fraction a, b;
	a.ShowFraction();
	b.ShowFraction();
	Fraction c, d;
	cout << "\na + b = ";
	c = a + b;	//�������� ���������� ��������+
	c.ShowFraction();
	d = a - b;
	cout << "a - b = ";
	d.ShowFraction();



	_getch();
}
