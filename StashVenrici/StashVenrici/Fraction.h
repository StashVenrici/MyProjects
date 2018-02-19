#pragma once
#include <iostream>
#include "Functions.h"




using namespace std;

class Fraction {
private:
	int numerator;
	int denomenator;
public:
	Fraction() {	//конструктор по умолчанию
		numerator = 0;
		denomenator = 1;
	}
	Fraction(int a, int b); 	//конструктор с параметрами
	
	void setFraction(int a, int b);

	void EnterFraction();

	Fraction sumFraction(Fraction a);
	Fraction subtrFraction(Fraction a);
	Fraction multFraction(Fraction a);
	Fraction divFraction(Fraction a);
	Fraction operator +(const Fraction a);
	Fraction operator -(const Fraction a);
	Fraction& operator ++();
	Fraction& operator --();
	Fraction& operator ++(int);
	Fraction& operator --(int);


	void ShowFraction() const {
		if (numerator == 0) cout << "0" << endl;
		else cout << numerator << " / " << denomenator << endl;
	}
	int getNUM() const{
		return numerator;
	}
	int getDENOM() const{
		return denomenator;
	}

};