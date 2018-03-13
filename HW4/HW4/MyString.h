
#pragma once

#include <iostream>
using namespace std;

class MyString
{
private:
    char * str;                   // адрес строки
    int len;                      // длина строки
	//static int count;			  // количество созданных объектов
	//int numb;					  // номер объекта при создании
	
public:
	MyString();                     // конструктор по умолчанию
	MyString(const char * s);       // конструктор преобразования 
	explicit MyString(int a);		// конструктор преобразования    // explicit
	MyString(const MyString & st);  // конструктор копий
	
	~MyString();                    // деструктор
    int length() const { return len; }
	void show();
	// пререгрузка операций

	MyString & operator=(const MyString & st); // операция = для MyString = MyString
	MyString & operator=(const char * s);      // операция = для MyString = char *
	MyString operator + (const MyString &s);


	operator char*(){ /*cout << "\n operator char *()\n"*/;  return str; }           // Функция преобразования
	void operator ()(const char * s);           //  перегрузка оператора () с одним параметром
	
	char &operator[](int);                    // операция [] 
	const char &operator[](int) const;        // операция [] 
	
	
	MyString(MyString && st);					// constructor copy  with Move 

	friend ostream & operator<<(ostream & os, const MyString & st);

	MyString & operator=(MyString && st);     // Assignment with Move
	friend istream & operator>>(istream & is, MyString & st);

	//static int get_count(){ return count; }    // статическая функция
	
	
	//int get_numb(){ return numb; }

	
	//static void func(int i, MyString *p = 0) {
	//	//если хотя бы один объект есть
	//	if (p)
	//		p->numb = i;
	//	//если объектов класса нет
	//	else
	//		count = i;
	//}

	MyString &operator +=(const MyString &p);

	bool operator>(const MyString &p) const;
	bool operator<(const MyString &p) const;
	bool operator==(const MyString &p) const;
	bool operator!=(const MyString &p) const;

};




//====================================================================================











