#pragma once
#include <iostream>
#include "Functions.h"




using namespace std;

class Fraction {
private:
	int numerator;
	int denomenator;
public:
	Fraction();	//конструктор по умолчанию
		
	Fraction(int a, int b); 	//конструктор с параметрами
	
	void setFraction(int a, int b);

	void EnterFraction();

	Fraction addFraction(Fraction a);


	void ShowFraction() {
		cout << numerator << " / " << denomenator << endl;
	}
	int getNUM() {
		return numerator;
	}
	int getDENOM() {
		return denomenator;
	}

};