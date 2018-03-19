#pragma once
#include<iostream>
using namespace std;

class MyArrow
{
	int SIZE;
	int *arr;
public:
	static int count;
	MyArrow();	//����������� �� ���������
	MyArrow(int sz);	//���������� � �����������
	MyArrow(const MyArrow &A);	//����������� �����
	MyArrow(MyArrow&&A);	//����������� MOVE
	void Show();
	MyArrow &operator=(const MyArrow &A);
	MyArrow &operator=(MyArrow &&A);	// �������� MOVE
	int & operator[](int a);
	MyArrow operator+(const int a) const;
	
	~MyArrow();
	double calcAVG();
	
	friend ostream & operator<<(ostream & os, const MyArrow & A);
	friend istream & operator>>(istream & is, const MyArrow & A);
	friend void foo(MyArrow);


};