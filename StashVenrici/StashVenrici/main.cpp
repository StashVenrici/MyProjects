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

	/*
	Fraction a(1, 3), b(1, 6);
	a.ShowFraction();
	b.ShowFraction();
	a.EnterFraction();
	a.ShowFraction();		//���� - ����� �������� � ���������

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
	*/





	/*������� 3. ���������� ����� ��������. ���������� ������� � ���������� - ������ ������: 
	���(������ �������� �����������), 
	���� ��������, 
	���������� �������,
	�����, 
	������, 
	�������� �������� ���������, 
	����� ������ 
	� 5 ������(���������� ����������� ������).
	
	���������� 
	������������, 
	������� - ���� ������ ��� ������ ������ �� �������, 
	���������� ��������� ��� ������� � ��������� ���������� - ������ 
	� ������� ����������� �������� ����� ��������.
	
	����������
	���������� 
	� ����������� �����������.
	
	�������� ����������� ������ ���� ��������,
	�������� ��� �� �����.*/

	Student A;
	int MarkList[] = { 5,6,8,5,4 };
	Student B(45, "Vasea Pupkin", 1, 6, 1987, "078787870", "Comrat", "Moldova", "Econom College", "IM-223", MarkList);
	B.ShowStudent();

	Student C = B;	//����������� �������� ������
	cout << "Copy C=B: \n";
	C.ShowStudent();

	Student ArrStudents[3];		//����������� ������ ���� ��������
	cout << "Static array of Students:\n";
	for (int i = 0; i < 3; i++) {
		ArrStudents[i].ShowStudent();		//�������� ��������� ���������� 8-)
	}

	_getch();
}
