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
	MyArrow(const MyArrow &A);
	void Show();
	MyArrow operator=(const MyArrow &A);
	int & operator[](int a);
	~MyArrow();

	friend ostream & operator<<(ostream & os, const MyArrow & A);
	//{
	//	for (int i = 0; i < A.SIZE; i++) os << A.arr[i]<< " ";
	//	return os;
	//}
	//непонятно почему, но внутри MyArrow.cpp функция ostream не видит полей класса
	//поэтому написал реализацию здесь, потом попробую разобраться

	friend void foo(MyArrow);


};