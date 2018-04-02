#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

void GetTxtStatistic(const string txt_file);

void GetTxtStatistic(const string txt_file)
{
	//создание текстового файла-отчета
	ofstream fout;
	fout.open("txt_report.txt");

	if (!fout.is_open())
	{
		cout << "Ошибка записи в файл!\n";
	}
	else
	{
		fout << "TODO: Статистика";
	}
	
	fout.close();	//закрываем файл
}

int main()
{
	setlocale(LC_ALL, "Russian");
	/*Задание 1. Дан текстовый файл. Необходимо создать новый файл и записать в него
		следующую статистику по исходному файлу :
	-Количество символов;
	-Количество строк;
	-Количество гласных букв;
	-Количество согласных букв;
	-Количество цифр.*/

	
	GetTxtStatistic("test");



	_getch();
	return 0;
}