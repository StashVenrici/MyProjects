#include<iostream>
#include<conio.h>
#include<fstream>
#include<cctype>
#include<string>
#include"txt_functions.h"

using namespace std;

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

	/*string txt_file;
	cout << "Статистика символов в тексте. Введите путь к текстовому файлу: ";
	getline(cin, txt_file);
	GetTxtStatistic(txt_file);*/


	/*Задание 2. Дано два текстовых файла.Выяснить, совпадают ли их строки.Если нет, то
		вывести на экран несовпадающую строку из каждого файла.*/

	//CompareFiles("test1.txt", "test2.txt");


	/*Задание 3. Дан текстовый файл.Найти длину самой длинной строки.*/

	//cout << "Max = " << MaxFileString("test_length.txt");


	/*Задание 4. Дан текстовый файл.Посчитать сколько раз в нем встречается заданное
		пользователем слово.*/

	//cout << "Найдена подстрока: "<< FindStr("find_test.txt", "qwerty") << " раз";

	



	_getch();
	return 0;
}