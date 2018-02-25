#include "MyDate.h"
#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

 string EnumMonths[12]=
{
	"January", "February", "Mart", "April", "May", "June", "July", "August", "September", "October", "November", "December"
};

MyDate::MyDate(int d, int m, int y)
{
	if (d >= 1 && d <= 31) day = d; else day = 1;			
	if (m >= 1 && m <= 12) month = m; else month = 1;
	if (y >= 1900 && y <= 2100) year = y; else year = 1900;
	//здесь минимальная проверка. По хорошему, надо бы сделать массив с месяцами 
	//и количеством дней в них, а также внедрить проверку на високосный год
	//но может как-нибудь потом?
}

MyDate::MyDate(std::string str)
{
	day = stoi(str.substr(0, 2));
	month = stoi(str.substr(3, 2));
	year = stoi(str.substr(6, 4));
}

void MyDate::Show()
{
	cout << EnumMonths[month-1] << ", " << day << ", " << year << endl;
}

MyDate::~MyDate()
{
}
