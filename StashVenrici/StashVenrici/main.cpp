#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include "Point3d.h"
#include "Functions.h"
#include "Fraction.h"
#include "Student.h"
#include "MyString.h"


using namespace std;




void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*������� 1. � ��� ������������ ����� ������� �������� ���������� ����������
		��������, ���������� � ����������.*/

	//Fraction a(2,5), b(2,5);
	//cout << "a = ";
	//a.ShowFraction();
	//cout << "b = ";
	//b.ShowFraction();
	//Fraction c, d;
	//cout << "\na + b = ";
	//c = a + b;	//�������� ���������� ��������+
	//c.ShowFraction();
	//d = a - b;
	//cout << "a - b = "; //���������� ���������-
	//d.ShowFraction();
	//cout << "\n========================\n";
	//++a;
	//cout << "++a = ";
	//a.ShowFraction();
	//cout << "\n========================\n";
	//--b;
	//cout << "--b = ";
	//b.ShowFraction();
	//cout << "\n========================\n";
	//a.setFraction(1, 2);
	//b.setFraction(1, 2);
	//Fraction x;
	//x = a + b++;
	//cout << "setting a = b = 1/2"<< endl << "a + b++ = ";
	//x.ShowFraction();
	//cout << "b++ = ";
	//b.ShowFraction();

	//cout << "\n========================\n";
	//a.setFraction(1, 2);
	//b.setFraction(1, 2);
	//Fraction y;
	//y = a + b--;
	//cout << "setting a = b = 1/2" << endl << "a + b-- = ";
	//y.ShowFraction();
	//cout << "b-- = ";
	//b.ShowFraction();


	/*������� 2. � ��� ������������ ����� ������������ �������� ���������� ����������
		��������(+= ), �������� <, != , ������� �����.*/

	//Point3d crdA(1,2,3), crdB(2,2,2);
	//cout << "point A: ";
	//crdA.ShowCoord();
	//cout << "point B: ";
	//crdB.ShowCoord();
	//cout << "point A + point B: ";
	//crdA += crdB;			//���������� ��������� +=
	//crdA.ShowCoord();
	//cout << "point A + INT 10: ";
	//crdA += 10;				//���������� ��������� +=INT
	//crdA.ShowCoord();

	//cout << "\n========================\n";
	//if (crdA < crdB) cout << "A < B";	//���������� ����� <
	//else cout << "A > B";

	//cout << "\n========================\n";
	//Point3d crdX(1, 2, 3), crdY(1, 2, 3), crdZ(3,2,1);
	//cout << "point X: ";
	//crdX.ShowCoord();
	//cout << "point Y: ";
	//crdY.ShowCoord();
	//cout << "point Z: ";
	//crdZ.ShowCoord();
	//if (crdX != crdY) cout << "X != Y"; else cout << "X = Y";
	//cout << endl;
	//if (crdX != crdZ) cout << "X != Z"; else cout << "X = Z";

	//cout << "\n========================\n";
	//-crdX;
	//cout << "-X = ";
	//crdX.ShowCoord();

	/*������� 3. � ��� ������������ ����� �������� �������� ���������� ����������
		�������� � �������������(+= ), �������� >, <, == , != .���������� ������������ �
		������ ����������� ������.*/

	MyString m;
	m.show();




	_getch();
}
