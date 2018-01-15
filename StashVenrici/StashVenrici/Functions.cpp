#include <iostream>
#include "Functions.h"

//дополнительные функции НОК и НОД
int NOD(int n1, int n2)
{
	int div;
	if (n1 == n2)  return n1;
	int d = n1 - n2;
	if (d < 0) {
		d = -d;  div = NOD(n1, d);
	}
	else
		div = NOD(n2, d);
	return div;
}
// Наименьшее общее кратное
int NOK(int n1, int n2)
{
	return n1*n2 / NOD(n1, n2);
}