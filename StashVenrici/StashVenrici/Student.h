#pragma once

class Student
{
	int stID;
	char *name;
	int b_day;
	int b_mnt;
	int b_year;
	char tel[10];
	char city[20];
	char country[50];
	char school_name[50];
	char group_number[10];
	int marks[5];
public:
	Student();
	Student(int id, char *nm, int d, int m, int yr, char tl[], char ct[], char cn[], char sn[], char gn[], int mr[]);
	void SetStudent(int id, char *nm, int d, int m, int yr, char tl[], char ct[], char cn[], char sn[], char gn[], int mr[]);
	Student(const Student & obj); 		//конструктор копирования
	void ShowStudent();
	~Student();
};