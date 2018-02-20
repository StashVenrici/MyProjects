#include <iostream>
#include <string.h>
#include <assert.h>
#include<conio.h>
#define _USE_MATH_DEFINES 
#include <math.h>  

#include "MyString.h"

using namespace std;

// инициализация статической переменной
//int MyString::count = 0;

//--------------------------------Конструктор по умолчанию-----------------------------------
MyString::MyString()              
{
	//len = 1;
	//str = new char[1];
	//str[0] = '\0';              
	
	len = 4;
	str = new char[len];
	strcpy_s(str, len, "C++"); 
	//count++;
	//numb = count;
	//cout << "\nDefault constructor, object # " << count << endl;
}

//-------------------------------Конструктор преобразования------------char * в MyString------------------------
MyString::MyString(const char * s)  
{
    len = strlen(s) + 1;    
    str = new char[len];    
    strcpy_s(str,len, s);   
	//count++;
	//numb = count;
	//cout << "\nConversion constructor, object # " << count << endl;
}

//------------------------Конструктор преобразования------------int в MyString------------------------
MyString::MyString(int a)
{
	int k = log10(a) + 1;  // количество цифр в числе
	len = k + 1;
	str = new char[len];
	_itoa_s(a, str, len, 10);// конвертирование числа в строку в 10-ой системе
	//count++;
	//numb = count;
	//cout << "\nConversion constructor, object # " << count << endl;
}

//-------------------------------Конструктор копий------------------------------------
MyString::MyString(const MyString & st)
{
    len = st.len + 1;
    str = new char[len];
	strcpy_s(str,len, st.str);
	/*count++;
	cout << "\nCopy Constructor, object # " << count << endl;*/
}


//--------------------------------Деструктор-----------------------------------
MyString::~MyString()                
{
	//count--;                     
	delete[]str;     // освобождение памяти
	//cout << "\nDestructor, count = " << count << endl;
	//_getch();
}

//--------------------------------Отображение строки-------------------------------
void MyString::show()
{
	cout << str << endl;
}

//----------------------------Перегрузка операции = для MyString =  MyString ----------
MyString & MyString::operator=(const MyString & st)
{
    cout << "\n operator =  \n";
	if (this == &st)
        return *this;
    delete [] str;
    len = st.len  + 1 ;
    str = new char[len];
    strcpy_s(str, len, st.str);
    return *this;
}

//----------------------------Перегрузка операции + для MyString +  MyString ----------
MyString MyString::operator + (const MyString &s)
{
	MyString t;
	t.len = len + s.len + 1;
	t.str = new char[t.len];
	strcpy_s(t.str, t.len, str);
	strcat_s(t.str, t.len, s.str);
	cout << "\n Operator +\n";
	return t;
}

//----------------------------Перегрузка операции = для MyString =  строка типа char *  ---------------------------------------

MyString & MyString::operator=(const char * s)
{
	cout << "\n operator =  \n";
	delete [] str;
    len = strlen(s) + 1 ;
    str = new char[len];
    strcpy_s(str,len, s);
    return *this;
}


void MyString::operator ()(const char * s)          //  перегрузка оператора () с одним параметром
{
	len = strlen(s) + 1;
	str = new char[len];
	strcpy_s(str, len, s);
	
	//cout << "\nOverload operator () " << count << endl;
}


//---------------------------Перегрузка операции [] ----------------------------------------
char &MyString::operator[](int subscript)             
{
	assert(subscript >= 0 && subscript < len);

	return str[subscript];  
}


//---------------------------Перегрузка операции [] ----------------------------------------
const char &MyString::operator[](int subscript) const 
{
	
	assert(subscript >= 0 && subscript < len);

	return str[subscript];  
}


//---------------------------Конструктор копий с перемещением ----------------------------------------
MyString::MyString(MyString && st)
{
	//cout << "\n Constructor copyi with MOVE " << count << "\n";
	len = st.len;
	str = st.str;
	//count++;

	st.len = 0;
	st.str = NULL;
	
}

/*
Копия данных не производится, задача - переместить ресурсы с одного объекта на другой, а не копировать их.
*/


//---------------------------Перегрузка операции << ----------------------------------------

ostream & operator<<(ostream & os, const MyString & st)
{
    os << st.str;
    return os;
}


//---------------------------Перегрузка операции = с перемещением ----------------------------------------
MyString & MyString::operator = ( MyString && st)
{
	cout << "\n operator =  MOVE \n";
	delete[] str;
	len = st.len;
	str = st.str;
	st.len = 0;
	st.str = NULL;
	
	return *this;
}


//---------------------------Перегрузка операции >> ----------------------------------------

istream & operator>>(istream & is, MyString & st)
{
	
	char temp[80];
    is.getline(temp, 80);
    if (is)
        st = temp;
    return is;
}




