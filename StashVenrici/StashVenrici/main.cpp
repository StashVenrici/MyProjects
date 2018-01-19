#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include "Point3d.h"
#include "Functions.h"
#include "Fraction.h"
#include "Student.h"


using namespace std;




void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Задание 1. Реализуйте класс “Точка”. Необходимо хранить координаты x, y, z в
	//переменных - членах класса.
	//Реализуйте конструкторы(по умолчанию и с параметрами),
	//функции - члены класса для изменения значений полей у объектов класса, 
	//ввода данных с клавиатуры, 
	//вывода данных, 
	//реализуйте аксессоры для доступа к переменным членам.

	/*
	Point3d a, c;	//объект класса

	a.ShowCoord();	//сработал конструктор со значениями по умолчанию

	Point3d b(1, 2, 3);		//инициализация с помощью конструктора с параметрами
	b.ShowCoord();

	c.EnterCords();		//ввод данных с клавиатуры
	c.ShowCoord();

	int x1 = c.getx();	//аксессор к координате x
	cout << "\nx1 = " << x1;
	*/

	//Задание 2. Реализуйте класс “Дробь”. Необходимо хранить числитель и знаменатель в качестве переменных - членов. 
	/*
	- Реализуйте конструктор по умолчанию и конструктор с параметрами,
	- функции - члены для ввода данных в переменные - члены,
	- вывода на консоль,
	- также функции для выполнения арифметических операций(сложение, вычитание, умножение, деление).
	*/

	/*
	Fraction a(1, 3), b(1, 6);
	a.ShowFraction();
	b.ShowFraction();
	a.EnterFraction();
	a.ShowFraction();		//тест - дробь вводится и выводится

	Fraction c = a.addFraction(b);	//проверка работы сложения
	a.ShowFraction();
	cout << " + ";
	b.ShowFraction();
	cout << " = ";
	c.ShowFraction();

	cout << "\n\n";

	Fraction d = a.subtrFraction(b);	//проверка работы вычитания
	a.ShowFraction();
	cout << " - ";
	b.ShowFraction();
	cout << " = ";
	d.ShowFraction();

	cout << "\n\n";

	Fraction e = a.multFraction(b);	//проверка работы умножения
	a.ShowFraction();
	cout << " * ";
	b.ShowFraction();
	cout << " = ";
	e.ShowFraction();

	cout << "\n\n";

	Fraction f = a.divFraction(b);	//проверка работы деления
	a.ShowFraction();
	cout << " / ";
	b.ShowFraction();
	cout << " = ";
	f.ShowFraction();
	*/





	/*Задание 3. Реализуйте класс “Студент”. Необходимо хранить в переменных - членах класса: 
	ФИО(память выделять динамически), 
	дату рождения, 
	контактный телефон,
	город, 
	страну, 
	название учебного заведения, 
	номер группы 
	и 5 оценок(одномерный статический массив).
	
	Реализуйте 
	конструкторы, 
	функцию - член класса для вывода данных на консоль, 
	реализуйте аксессоры для доступа к отдельным переменным - членам 
	и функцию определения среднего балла студента.
	
	Реализуйте
	деструктор 
	и конструктор копирования.
	
	Создайте статический массив типа “Студент”,
	выведите его на экран.*/

	Student A;
	int MarkList[] = { 5,6,8,5,4 };
	Student B(45, "Vasea Pupkin", 1, 6, 1987, "078787870", "Comrat", "Moldova", "Econom College", "IM-223", MarkList);
	B.ShowStudent();

	Student C = B;	//копирование объектов класса
	cout << "Copy C=B: \n";
	C.ShowStudent();

	Student ArrStudents[3];		//статический массив типа “Студент”
	cout << "Static array of Students:\n";
	for (int i = 0; i < 3; i++) {
		ArrStudents[i].ShowStudent();		//заполнен тестовыми значениями 8-)
	}

	_getch();
}
