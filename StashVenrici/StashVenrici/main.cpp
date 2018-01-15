#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include "Point3d.h"
#include "Functions.h"
#include "Fraction.h"


using namespace std;




void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������� 1. ���������� ����� �������. ���������� ������� ���������� x, y, z �
	//���������� - ������ ������.
	//���������� ������������(�� ��������� � � �����������),
	//������� - ����� ������ ��� ��������� �������� ����� � �������� ������, 
	//����� ������ � ����������, 
	//������ ������, 
	//���������� ��������� ��� ������� � ���������� ������.

	/*
	Point3d a, c;	//������ ������

	a.ShowCoord();	//�������� ����������� �� ���������� �� ���������

	Point3d b(1, 2, 3);		//������������� � ������� ������������ � �����������
	b.ShowCoord();

	c.EnterCords();		//���� ������ � ����������
	c.ShowCoord();

	int x1 = c.getx();	//�������� � ���������� x
	cout << "\nx1 = " << x1;
	*/

	//������� 2. ���������� ����� �������. ���������� ������� ��������� � ����������� � �������� ���������� - ������. 
	/*
	- ���������� ����������� �� ��������� � ����������� � �����������,
	- ������� - ����� ��� ����� ������ � ���������� - �����,
	- ������ �� �������,
	- ����� ������� ��� ���������� �������������� ��������(��������, ���������, ���������, �������).
	*/

	Fraction a(1, 3), b(1, 6);
	/*a.ShowFraction();
	b.ShowFraction();
	a.EnterFraction();
	a.ShowFraction();*/		//���� - ����� �������� � ���������

	Fraction c = a.addFraction(b);	//�������� ������ ��������
	a.ShowFraction();
	cout << " + ";
	b.ShowFraction();
	cout << " = ";
	c.ShowFraction();

	cout << "\n\n";

	Fraction d = a.subtrFraction(b);	//�������� ������ ���������
	a.ShowFraction();
	cout << " - ";
	b.ShowFraction();
	cout << " = ";
	d.ShowFraction();

	cout << "\n\n";

	Fraction e = a.multFraction(b);	//�������� ������ ���������
	a.ShowFraction();
	cout << " * ";
	b.ShowFraction();
	cout << " = ";
	e.ShowFraction();

	cout << "\n\n";

	Fraction f = a.divFraction(b);	//�������� ������ �������
	a.ShowFraction();
	cout << " / ";
	b.ShowFraction();
	cout << " = ";
	f.ShowFraction();




	_getch();
}