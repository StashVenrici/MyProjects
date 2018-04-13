#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
#include"SimpleFM.h"

void CreateFM()
{
	string name;
	cout << "Введите имя файла: ";
	cin >> name;
	ofstream fout;
	fout.open(name);
	if (!fout.is_open())
	{
		cout << "Ошибка!";
	}
	else
	{
		cout << "файл \"" << name << "\" создан";
	}
	fout.close();
}

void DeleteFM()
{
	string name;
	cout << "Введите имя файла для удаления: ";
	cin >> name;
	if (!remove(name.c_str())) cout << "удалено успешно";
	else cout << "ошибка удаления";
}

void RenameFM()
{
	string oldname, newname;
	cout << "Введите имя файла для переименования: ";
	cin >> oldname;
	cout << "Введите новое имя файла: ";
	cin >> newname;
	if (!rename(oldname.c_str(), newname.c_str())) cout << "переименован успешною";
	else cout << "ошибка переименования!";
}

void MoveFM()
{
	string oldname, newname;
	cout << "Введите имя файла для переименования: ";
	cin >> oldname;
	cout << "Введите новый путь файла в формате disk:\\folder1\\folder2\\";
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
	if (!rename(oldname.c_str(), newname.c_str())) cout << "перемещен успешно.";
	else cout << "ошибка перемещения!";
}

void ReadFM()
{
	string name;
	cout << "Введите имя файла: ";
	cin >> name;
	ifstream fin;
	fin.open(name);
	if (!fin.is_open())
	{
		cout << "Ошибка!";
	}
	else
	{
		cout << "Содержимое файла: \n";
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
	}
	fin.close();
}