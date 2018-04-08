#include<iostream>
#include<conio.h>
#include<fstream>
#include<cctype>
#include<string>

using namespace std;

void GetTxtStatistic(const string txt_file);

void GetTxtStatistic(const string txt_file = "test.txt")
{
	char currentSymbol;
	char vowels[] = "AEIOUYaeiouyАУОЕЫИЭЯЁЬЮауоеыиэяёью";  //список гласных букв для подсчета
	int sym_count = 0,
		lines_count = 1,
		vowels_count = 0,
		consonants_count = 0,
		digits_count = 0;

	ofstream fout;
	ifstream fin;
	fout.open("txt_report.txt");
	fin.open(txt_file);

	if (!fout.is_open() || !fin.is_open())
	{
		cout << "Ошибка !\n";
	}
	else
	{

		//вот здесь не считывает русские символы
		while (fin.get(currentSymbol))
		{
			sym_count++;
			if (currentSymbol == '\n') ++lines_count;
			if (isalpha((unsigned char)currentSymbol)) {
				if (strchr(vowels, (unsigned char)currentSymbol))
				{
					vowels_count++;
				}
				else
				{
					consonants_count++;
				}
			}
			if (isdigit((unsigned char)currentSymbol)) ++digits_count;

		}

		//блок записи статистики в файл
		fout << "Статистика:\n"
			<< "\nКоличество символов: " << sym_count
			<< "\nКоличество строк: " << lines_count
			<< "\nКоличество гласных букв: " << vowels_count
			<< "\nКоличество согласных букв: " << consonants_count
			<< "\nКоличество цифр: " << digits_count;

		cout << "Статистика по тексту записана в файл \"txt_report.txt\"";
	}



	fout.close();
	fin.close();
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

	string txt_file;

	cout << "Статистика символов в тексте. Введите путь к текстовому файлу: ";
	getline(cin, txt_file);
	GetTxtStatistic(txt_file);
	



	_getch();
	return 0;
}