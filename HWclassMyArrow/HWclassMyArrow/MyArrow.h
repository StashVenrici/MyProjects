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

	friend ostream & operator<<(ostream & os, const MyArrow & A);
	//{
	//	for (int i = 0; i < A.SIZE; i++) os << A.arr[i]<< " ";
	//	return os;
	//}
	//��������� ������, �� ������ MyArrow.cpp ������� ostream �� ����� ����� ������
	//������� ������� ���������� �����, ����� �������� �����������

	friend void foo(MyArrow);


};