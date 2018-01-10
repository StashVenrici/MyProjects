#include <iostream>
#include<conio.h>
#include "function.h"
using namespace std;


void main() {
	class_t mas[SIZE][SIZE];

	FillArr(mas, SIZE);
	ShowArr(mas, SIZE);
	class_t min = FindMin(mas, SIZE);
	cout << "\nmin = " << min;
	class_t max = FindMax(mas, SIZE);
	cout << "\nmax = " << max;
	cout << "\nsort:\n";
	insertSort(mas, SIZE);
	ShowArr(mas, SIZE);
	EditElement(mas);


	_getch();
}