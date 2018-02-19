#pragma once


class Point3d {
private:
	int x;
	int y;
	int z;
public:
	Point3d();
	Point3d(int xn, int yn, int zn);
	void changeX(int xn);
	void changeY(int yn);
	void changeZ(int zn);

	void EnterCords();
	void ShowCoord() const;
	int getx() const;
	int gety() const;
	int getz() const;

	Point3d operator+=(const Point3d a);
	Point3d operator+=(const int a);

	bool operator <(const Point3d p);
	bool operator !=(const Point3d p);

	Point3d operator-();
};