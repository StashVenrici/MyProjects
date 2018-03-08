#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<cassert>
#include "MyArrow.h"
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
	srand(time(NULL));
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

void MyArrow::Show()
{
	for (int i = 0; i < SIZE; i++) cout << endl << arr[i] <<" ";
	cout << endl;
}

MyArrow MyArrow::operator=(const MyArrow &A)
{
	if (this == &A)
		return *this;
	delete[]arr;
	SIZE = A.SIZE;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = A.arr[i];
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