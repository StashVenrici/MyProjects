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
	MyArrow(const MyArrow &A);
	void Show();
	MyArrow operator=(const MyArrow &A);
	int & operator[](int a);
	~MyArrow();
	double calcAVG();

	friend ostream & operator<<(ostream & os, const MyArrow & A);

	friend void foo(MyArrow);


};