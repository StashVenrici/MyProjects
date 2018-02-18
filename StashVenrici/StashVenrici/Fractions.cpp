#include <iostream>
#include "Functions.h"
#include "Fraction.h"

using namespace std;

	Fraction::Fraction(int a, int b) {	//конструктор с параметрами
		numerator = a;
		denomenator = b;
	}
	void Fraction::setFraction(int a, int b) {
		numerator = a;
		denomenator = b;
	}
	void Fraction::EnterFraction() {
		cout << "Enter fraction: ";
		cout << "\nnumerator = ";
		cin >> numerator ;
		cout << "denomenator = ";
		cin  >> denomenator;
	}

	Fraction Fraction::sumFraction(Fraction a) {
		Fraction tmp;
		int nok, nod, s1, s2;
		nok = NOK(denomenator, a.denomenator); //нахождение наименьшего общего кратного
		s1 = nok / denomenator;	//находим дополнительные множители
		s2 = nok / a.denomenator;
		tmp.numerator = numerator*s1 + a.numerator*s2;	//числитель
		tmp.denomenator = nok;	//знаменатель
		nod = NOD(tmp.numerator, tmp.denomenator);
		if (nod == 1) return tmp;
		else {
			tmp.numerator /= nod;
			tmp.denomenator /= nod;
		}
		return tmp;

	}

	Fraction Fraction::subtrFraction(Fraction a) {
		Fraction tmp;
		int nok, nod, s1, s2;
		nok = NOK(denomenator, a.denomenator); //нахождение наименьшего общего кратного
		s1 = nok / denomenator;	//находим дополнительные множители
		s2 = nok / a.denomenator;
		tmp.numerator = numerator*s1 - a.numerator*s2;	//числитель
		if (tmp.numerator == 0) { tmp.setFraction(0, 1); return tmp; }
		tmp.denomenator = nok;	//знаменатель
		nod = NOD(tmp.numerator, tmp.denomenator);
		if (nod == 1) return tmp;
		else {
			tmp.numerator /= nod;
			tmp.denomenator /= nod;
		}
		return tmp;

	}

	Fraction Fraction::multFraction(Fraction a) {
		Fraction tmp;
		int nod;
		tmp.numerator = numerator*a.numerator;
		tmp.denomenator = denomenator*a.denomenator;
		nod = NOD(tmp.numerator, tmp.denomenator);
		if (nod == 1) return tmp;
		else {
			tmp.numerator /= nod;
			tmp.denomenator /= nod;
		}
		return tmp;
	}

	Fraction Fraction::divFraction(Fraction a) {
		Fraction tmp;
		int nod;
		tmp.numerator = numerator*a.denomenator;
		tmp.denomenator = denomenator*a.numerator;
		nod = NOD(tmp.numerator, tmp.denomenator);
		if (nod == 1) return tmp;
		else {
			tmp.numerator /= nod;
			tmp.denomenator /= nod;
		}
		return tmp;
	}

	Fraction Fraction::operator+(const Fraction a) {
		Fraction tmp;
		tmp = this->sumFraction(a);
		return tmp;
	}

	Fraction Fraction::operator-(const Fraction a) {
		Fraction tmp;
		tmp = this->subtrFraction(a);
		return tmp;
	}