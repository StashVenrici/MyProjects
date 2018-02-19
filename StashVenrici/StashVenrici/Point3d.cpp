#include <iostream>
#include"Point3d.h"
#include <cmath>

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
	
	void Point3d::ShowCoord() const {
		cout << "(" << x << ", " << y << ", " << z << ")" << endl;
	}
	
	int Point3d::getx() const {
		return x;
	}
	
	int Point3d::gety() const {
		return y;
	}
	
	int Point3d::getz() const {
		return z;
	}

	Point3d Point3d::operator+=(const Point3d a) {
		x += a.x;
		y += a.y;
		z += a.z;
		return *this;
	}

	Point3d Point3d::operator+=(const int a) {
		x += a;
		y += a;
		z += a;
		return *this;
	}

	bool Point3d::operator <(const Point3d p) {
		return (sqrt(x*x + y*y + z*z) < sqrt(p.x*p.x + p.y*p.y + p.z*p.z));
	}

	bool Point3d::operator !=(const Point3d p) {
		if (x == p.x && y == p.y && z == p.z)return false; else return true;
	}

	Point3d Point3d::operator-() {
		x = -x;
		y = -y;
		z = -z;
		return *this;
	}