#include <iostream>
#include<time.h>
#include<iomanip>
#include<stdlib.h>

#include "function.h"


using namespace std;

void FillArrINT(int matrix[][SIZE], int size)
{
	srand(time(NULL));
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			matrix[i][j] = (char)(rand() % 100 + 1);
		}
	}
}
void ShowArrINT(int matrix[][SIZE], int size)
{
	cout << endl;
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}
int FindMinINT(int matrix[][SIZE], int size)
{
	int min = matrix[0][0];
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			if (matrix[i][j] < min) min = matrix[i][j];
		}
	}
	return min;
}
int FindMaxINT(int matrix[][SIZE], int size)
{
	int max = matrix[0][0];
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			if (matrix[i][j] > max) max = matrix[i][j];
		}
	}
	return max;
}
void insertSortINT(int matrix[][SIZE], int size) {
	int x;
	long i, j;
	int *p = matrix[0];		//здесь я сомневаюсь, но код работает
							//это должен быть указатель на двумерный массив

	for (i = 0; i < size*size; i++) {  
		x = *(p+i);

		// поиск места элемента в готовой последовательности 
		for (j = i - 1; j >= 0 && *(p + j) > x; j--)
			*(p+j + 1) = *(p+j);  	// сдвигаем элемент направо, пока не дошли

								// место найдено, вставить элемент
		*(p + j + 1) = x;
	}
}
void EditElementINT(int matrix[][SIZE]) {
	int x, y, R;
	cout << "Enter Row and Col of element to edit:\n";
	cin >> x >> y;
	cout << "Enter new value: ";
	cin >> R;
	matrix[x][y] = R;
	ShowArrINT(matrix, SIZE);
}

void FillArrCHAR(char matrix[][SIZE], int size)
{
	srand(time(NULL));
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			matrix[i][j] = rand() % 255 + 1;
		}
	}
}
void ShowArrCHAR(char matrix[][SIZE], int size)
{
	cout << endl;
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}
int FindMinCHAR(char matrix[][SIZE], int size)
{
	int min = matrix[0][0];
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			if (matrix[i][j] < min) min = matrix[i][j];
		}
	}
	return min;
}
int FindMaxCHAR(char matrix[][SIZE], int size)
{
	int max = matrix[0][0];
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			if (matrix[i][j] > max) max = matrix[i][j];
		}
	}
	return max;
}
void insertSortCHAR(char matrix[][SIZE], int size) {
	int x;
	long i, j;
	char *p = matrix[0];		//здесь я сомневаюсь, но код работает
							//это должен быть указатель на двумерный массив

	for (i = 0; i < size*size; i++) {
		x = *(p + i);

		// поиск места элемента в готовой последовательности 
		for (j = i - 1; j >= 0 && *(p + j) > x; j--)
			*(p + j + 1) = *(p + j);  	// сдвигаем элемент направо, пока не дошли

										// место найдено, вставить элемент
		*(p + j + 1) = x;
	}
}
void EditElementCHAR(char matrix[][SIZE]) {
	int x, y;
	char R;
	cout << "Enter Row and Col of element to edit:\n";
	cin >> x >> y;
	cout << "Enter new value: ";
	cin >> R;
	matrix[x][y] = R;
	ShowArrCHAR(matrix, SIZE);
}

void FillArrDOUBLE(double matrix[][SIZE], int size)
{
	srand(time(NULL));
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			matrix[i][j] = (double)(rand()) / RAND_MAX*(100);
		}
	}
}
void ShowArrDOUBLE(double matrix[][SIZE], int size)
{
	cout << endl;
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			cout << setw(10) << matrix[i][j];
		}
		cout << endl;
	}
}
int FindMinDOUBLE(double matrix[][SIZE], int size)
{
	double min = matrix[0][0];
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			if (matrix[i][j] < min) min = matrix[i][j];
		}
	}
	return min;
}
int FindMaxDOUBLE(double matrix[][SIZE], int size)
{
	double max = matrix[0][0];
	for (int i = 0; i<size; i++) {
		for (int j = 0; j<size; j++) {
			if (matrix[i][j] > max) max = matrix[i][j];
		}
	}
	return max;
}
void insertSortDOUBLE(double matrix[][SIZE], int size) {
	double x;
	long i, j;
	double *p = matrix[0];		//здесь я сомневаюсь, но код работает
							//это должен быть указатель на двумерный массив

	for (i = 0; i < size*size; i++) {
		x = *(p + i); 
		for (j = i - 1; j >= 0 && *(p + j) > x; j--)
			*(p + j + 1) = *(p + j);  	
		*(p + j + 1) = x;
	}
}
void EditElementDOUBLE(double matrix[][SIZE]) {
	int x, y;
	double R;
	cout << "Enter Row and Col of element to edit:\n";
	cin >> x >> y;
	cout << "Enter new value: ";
	cin >> R;
	matrix[x][y] = R;
	ShowArrDOUBLE(matrix, SIZE);
}