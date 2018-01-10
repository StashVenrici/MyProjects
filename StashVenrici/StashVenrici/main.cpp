#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>

using namespace std;

class Point3d {
private:
	int x;
	int y;
	int z;
public:
	Point3d() {		//����������� �� ���������
		x = 0;
		y = 0;
		z = 0;
	}
	Point3d(int xn, int yn, int zn) {	//����������� � �����������
		x = xn;
		y = yn;
		z = zn;
	}
	void setCoord(int xn, int yn, int zn) {
		x = xn;
		y = yn;
		z = zn;
	}
	void changeX(int xn) {
		x = xn;
	}
	void changeY(int yn) {
		y = yn;
	}
	void changeZ(int zn) {
		z = zn;
	}

	void EnterCords() {
		int xn = 0, yn = 0, zn = 0;
		cout << "Enter x,y,z: ";
		cin >> xn >> yn >> zn;
		x = xn;
		y = yn;
		z = zn;
	}
	void ShowCoord() {
		cout << "(" << x << ", " << y << ", " << z << ")" << endl;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
	int getz() {
		return z;
	}
};


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

	Point3d a, b;

	a.ShowCoord();
	a.setCoord(3, 2, 1);
	a.ShowCoord();

	b.EnterCords();
	b.ShowCoord();

	_getch();
}
