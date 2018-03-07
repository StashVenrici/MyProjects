#include "MyArrow.h"
#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

MyArrow::MyArrow()
{
	//cout << "creating...";
	SIZE = 1;
	arr = new int[SIZE];
	arr[0] = 0;
}

MyArrow::MyArrow(int sz)
{
	srand(time(NULL));
	SIZE = sz;
	arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) arr[i] = rand()%100;
}

void MyArrow::Show()
{
	for (int i = 0; i < SIZE; i++) cout << endl << arr[i] <<" ";
	cout << endl;
}


MyArrow::~MyArrow()
{
	//cout << "deleted...";
	_getch();
	delete[] arr;
}
