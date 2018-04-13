#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
#include"SimpleFM.h"

void CreateFM()
{
	string name;
	cout << "������� ��� �����: ";
	cin >> name;
	ofstream fout;
	fout.open(name);
	if (!fout.is_open())
	{
		cout << "������!";
	}
	else
	{
		cout << "���� \"" << name << "\" ������";
	}
	fout.close();
}

void DeleteFM()
{
	string name;
	cout << "������� ��� ����� ��� ��������: ";
	cin >> name;
	if (!remove(name.c_str())) cout << "������� �������";
	else cout << "������ ��������";
}

void RenameFM()
{
	string oldname, newname;
	cout << "������� ��� ����� ��� ��������������: ";
	cin >> oldname;
	cout << "������� ����� ��� �����: ";
	cin >> newname;
	if (!rename(oldname.c_str(), newname.c_str())) cout << "������������ ��������";
	else cout << "������ ��������������!";
}

void MoveFM()
{
	string oldname, newname;
	cout << "������� ��� ����� ��� ��������������: ";
	cin >> oldname;
	cout << "������� ����� ���� ����� � ������� disk:\\folder1\\folder2\\";
	cin >> newname;
	for (int i = 0; i < newname.length(); i++)
	{
		if (newname[i] == '\\') 
		{
			i++;
			newname.insert(i, "\\");
		}
	}
	newname += oldname;
	if (!rename(oldname.c_str(), newname.c_str())) cout << "��������� �������.";
	else cout << "������ �����������!";
}

void ReadFM()
{
	string name;
	cout << "������� ��� �����: ";
	cin >> name;
	ifstream fin;
	fin.open(name);
	if (!fin.is_open())
	{
		cout << "������!";
	}
	else
	{
		cout << "���������� �����: \n";
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
	}
	fin.close();
}