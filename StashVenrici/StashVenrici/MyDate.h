#pragma once
#include <string>
class MyDate
{
	int day;
	int month;
	int year;
public:
	MyDate(int d=1,int m=1,int y=1900);
	MyDate(std::string str);
	void Show();
	~MyDate();
};

