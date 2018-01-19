#include <iostream>
#include "Student.h"

using namespace std;

	Student::Student() {
		stID = 0;
		name = new char[5];
		strcpy(name, "test");
		b_day = 0;
		b_mnt = 0;
		b_year = 0;
		strcpy(tel, "1234567890");
		strcpy(city, "test");
		strcpy(country, "test");
		strcpy(school_name, "test");
		strcpy(group_number, "TEST-123");
		for (int i = 0; i < 5; i++) { marks[i] = 0; }
	}
	Student::Student(int id, char *nm, int d, int m, int yr, char tl[], char ct[], char cn[], char sn[], char gn[], int mr[]) {
		stID = id;
		int SIZE = strlen(nm) + 1;
		name = new char[SIZE];
		strcpy(name, nm);
		b_day = d;
		b_mnt = m;
		b_year = yr;
		strcpy(tel, tl);
		strcpy(city, ct);
		strcpy(country, cn);
		strcpy(school_name, sn);
		strcpy(group_number, gn);
		for (int i = 0; i < 5; i++) { marks[i] = mr[i]; }
	}

	void Student::SetStudent(int id, char *nm, int d, int m, int yr, char tl[], char ct[], char cn[], char sn[], char gn[], int mr[]) {
		stID = id;
		int SIZE = strlen(nm) + 1;
		name = new char[SIZE];
		strcpy(name, nm);
		b_day = d;
		b_mnt = m;
		b_year = yr;
		strcpy(tel, tl);
		strcpy(city, ct);
		strcpy(country, cn);
		strcpy(school_name, sn);
		strcpy(group_number, gn);
		for (int i = 0; i < 5; i++) { marks[i] = mr[i]; }
	}
	Student::Student(const Student & obj) {		//конструктор копирования
		stID = obj.stID;
		int SIZE = strlen(obj.name) + 1;
		name = new char[SIZE];
		strcpy(name, obj.name);
		b_day = obj.b_day;
		b_mnt = obj.b_mnt;
		b_year = obj.b_year;
		strcpy(tel, obj.tel);
		strcpy(city, obj.city);
		strcpy(country, obj.country);
		strcpy(school_name, obj.school_name);
		strcpy(group_number, obj.group_number);
		for (int i = 0; i < 5; i++) { marks[i] = obj.marks[i]; }
	}

	void Student::ShowStudent() {
		cout << "Student ID:\t" << stID
			<< "\nStudent name:\t" << name
			<< "\nBirthday:\t" << b_day << "." << b_mnt << "." << b_year
			<< "\nPhone number:\t" << tel
			<< "\nCity:\t\t" << city
			<< "\nCountry:\t" << country
			<< "\nGrad. school:\t" << school_name
			<< "\nGroup number:\t" << group_number
			<< "\nExam. marks:\t";
		for (int i = 0; i < 4; i++) { cout << marks[i] << ", "; }
		cout << marks[4] << endl << endl;
	}
	Student::~Student() {
		delete[]name;
	}