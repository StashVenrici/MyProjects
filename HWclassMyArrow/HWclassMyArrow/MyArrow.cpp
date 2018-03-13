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

MyArrow::MyArrow()
{
	count++;
	SIZE = 1;
	arr = new int[SIZE];
	arr[0] = 0;
}

MyArrow::MyArrow(int sz)
{
	count++;
	//srand(time(NULL));
	SIZE = sz;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = rand()%100;
}

MyArrow::MyArrow(const MyArrow &A)
{
	count++;
	SIZE = A.SIZE;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = A.arr[i];
}

MyArrow::MyArrow(MyArrow&&A)
{
	count++;
	SIZE = A.SIZE;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = A.arr[i];
	A.SIZE = 0;
	A.arr = nullptr;
}

void MyArrow::Show()
{
	for (int i = 0; i < SIZE; i++) cout << arr[i] <<" ";
	cout << endl;
}

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

MyArrow &MyArrow::operator=(MyArrow &&A)
{
	if (this == &A)
		return *this;
	delete[]arr;
	SIZE = A.SIZE;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = A.arr[i];
	A.SIZE = 0;
	A.arr = nullptr;
	return *this;
}

int & MyArrow::operator[](int a)
{
	assert(a >= 0 && a < SIZE);
	return this->arr[a];
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
