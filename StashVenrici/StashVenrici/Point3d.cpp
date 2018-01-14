#include <iostream>
#include"Point3d.h"

using namespace std;

	Point3d::Point3d() {		//конструктор по умолчанию
		x = 0;
		y = 0;
		z = 0;
	}
		
	Point3d::Point3d(int xn, int yn, int zn) {	//конструктор с параметрами
		x = xn;
		y = yn;
		z = zn;
	}
	
	void Point3d::changeX(int xn) {	//
		x = xn;
	}
	
	void Point3d::changeY(int yn) {
		y = yn;
	}
	
	void Point3d::changeZ(int zn) {
		z = zn;
	}

	void Point3d::EnterCords() {
		int xn = 0, yn = 0, zn = 0;
		cout << "Enter x,y,z: ";
		cin >> xn >> yn >> zn;
		x = xn;
		y = yn;
		z = zn;
	}
	
	void Point3d::ShowCoord() {
		cout << "(" << x << ", " << y << ", " << z << ")" << endl;
	}
	
	int Point3d::getx() {
		return x;
	}
	
	int Point3d::gety() {
		return y;
	}
	
	int Point3d::getz() {
		return z;
	}