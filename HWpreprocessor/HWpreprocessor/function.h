#pragma once

//#include "function.cpp"

#define SIZE 10

#define INTEGER		//этот блок работает только в хидере
//#define CHAR		//хотя по условиям задание должен быть в prog.cpp
//#define DOUBLE

#ifdef INTEGER
#define FillArr FillArrINT 
#define ShowArr ShowArrINT
#define FindMin FindMinINT
#define FindMax FindMaxINT
#define insertSort insertSortINT
#define EditElement EditElementINT
#define class_t int
#endif // INTEGER

#ifdef CHAR
#define FillArr FillArrCHAR
#define ShowArr ShowArrCHAR
#define FindMin FindMinCHAR
#define FindMax FindMaxCHAR
#define insertSort insertSortCHAR
#define EditElement EditElementCHAR
#define class_t char
#endif // CHAR

#ifdef DOUBLE
#define FillArr FillArrDOUBLE
#define ShowArr ShowArrDOUBLE
#define FindMin FindMinDOUBLE
#define FindMax FindMaxDOUBLE
#define insertSort insertSortDOUBLE
#define EditElement EditElementDOUBLE
#define class_t double
#endif // DOUBLE




void FillArrINT(int matrix[][SIZE], int size);
void ShowArrINT(int matrix[][SIZE], int size);
int FindMinINT(int matrix[][SIZE], int size);
int FindMaxINT(int matrix[][SIZE], int size);
void insertSortINT(int matrix[][SIZE], int size);
void EditElementINT(int matrix[][SIZE]);

void FillArrCHAR(char matrix[][SIZE], int size);
void ShowArrCHAR(char matrix[][SIZE], int size);
int FindMinCHAR(char matrix[][SIZE], int size);
int FindMaxCHAR(char matrix[][SIZE], int size);
void insertSortCHAR(char matrix[][SIZE], int size);
void EditElementCHAR(char matrix[][SIZE]);

void FillArrDOUBLE(double matrix[][SIZE], int size);
void ShowArrDOUBLE(double matrix[][SIZE], int size);
int FindMinDOUBLE(double matrix[][SIZE], int size);
int FindMaxDOUBLE(double matrix[][SIZE], int size);
void insertSortDOUBLE(double matrix[][SIZE], int size);
void EditElementDOUBLE(double matrix[][SIZE]);