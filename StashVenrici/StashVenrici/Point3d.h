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
	void ShowCoord();
	int getx();
	int gety();
	int getz();
};