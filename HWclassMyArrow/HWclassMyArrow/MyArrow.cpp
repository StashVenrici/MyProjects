#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<cassert>
#include "MyArrow.h"
#define _USE_MATH_DEFINES 
#include <math.h>  

using namespace std;

int MyArrow::count = 0;

//�������� ������� ������ ������� 1
MyArrow::MyArrow()
{
	count++;
	SIZE = 1;
	arr = new int[SIZE];
	arr[0] = 0;
}

//�������� ������� ������ ��������� �������
MyArrow::MyArrow(int sz)
{
	count++;
	SIZE = sz;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = 0;
}

//����������� �����������
MyArrow::MyArrow(const MyArrow &A)
{
	count++;
	SIZE = A.SIZE;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = A.arr[i];
}

//����������� ����������� MOVE
MyArrow::MyArrow(MyArrow&&A)
{
	count++;
	SIZE = A.SIZE;
	arr = A.arr;
	A.SIZE = 0;
	A.arr = nullptr;
}

//����� Show
void MyArrow::Show()
{
	for (int i = 0; i < SIZE; i++) cout << arr[i] <<" ";
	cout << endl;
}

//���������� ��������� =
MyArrow &MyArrow::operator=(const MyArrow &A)
{
	if (this == &A)
		return *this;
	delete[]arr;
	SIZE = A.SIZE;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = A.arr[i];
	return *this;
}

//���������� ��������� =
MyArrow &MyArrow::operator=(MyArrow &&A)
{
	if (this == &A)
		return *this;
	delete[]arr;
	SIZE = A.SIZE;
	arr = A.arr;
	A.SIZE = 0;
	A.arr = nullptr;
	return *this;
}

int & MyArrow::operator[](int a)
{
	assert(a >= 0 && a < SIZE);
	return this->arr[a];
}

MyArrow MyArrow::operator+(const int a)
{
	MyArrow TMP(SIZE+1);
	for (int i = 0; i < SIZE; i++) TMP.arr[i] = arr[i];
	TMP.arr[SIZE] = a;
	TMP.SIZE = SIZE + 1;
	return TMP;
}

MyArrow::~MyArrow()
{
	count--;
	//_getch();
	delete[] arr;
}

double MyArrow::calcAVG()
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++) sum += arr[i];
	return ((sum / (double)SIZE));
}

MyArrow operator+(int a, const MyArrow & A)
{
	MyArrow TMP(A.SIZE + 1);
	TMP.arr[0] = a;
	for (int i = 1; i < A.SIZE+1; i++) TMP.arr[i] = A.arr[i-1];
	return TMP;
}

MyArrow MyArrow::operator+(const MyArrow &A)
{
	MyArrow TMP(this->SIZE + A.SIZE);
	TMP.SIZE = this->SIZE + A.SIZE;
	int i;
	for (i = 0; i < this->SIZE; i++)
	{
		TMP.arr[i] = this->arr[i];
	}
	for (int j = 0; j < A.SIZE; j++)
	{
		TMP.arr[i] = A.arr[j];
		i++;
	}
	return TMP;
}