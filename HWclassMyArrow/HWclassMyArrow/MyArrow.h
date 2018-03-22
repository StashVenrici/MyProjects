#pragma once
#include<iostream>
using namespace std;

class MyArrow
{
	int SIZE;
	int *arr;
public:
	static int count;
	MyArrow();	//конструктор по умолчанию
	MyArrow(int sz);	//коструктор с параметрами
	MyArrow(const MyArrow &A);	//конструктор копий
	MyArrow(MyArrow&&A);	//конструктор MOVE
	void Show();
	MyArrow &operator=(const MyArrow &A);
	MyArrow &operator=(MyArrow &&A);	// оператор MOVE
	int & operator[](int a);
	MyArrow operator+(const int a);
	MyArrow operator+(const MyArrow &A);
	
	~MyArrow();
	double calcAVG();
	
	friend ostream & operator<<(ostream & os, const MyArrow & A);
	friend istream & operator>>(istream & is, const MyArrow & A);
	friend void foo(MyArrow);

	friend MyArrow operator+(int a, const MyArrow & A);		//перегрузка int+MyArrow;


};