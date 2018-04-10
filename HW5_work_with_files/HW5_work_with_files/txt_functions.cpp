#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
#include"txt_functions.h"

using namespace std;

void GetTxtStatistic(const string txt_file = "test.txt")
{
	char currentSymbol;
	char vowels[] = "AEIOUYaeiouy�������ߨ�������������";  //������ ������� ���� ��� ��������
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
		cout << "������ !\n";
	}
	else
	{
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

		//���� ������ ���������� � ����
		fout << "����������:\n"
			<< "\n���������� ��������: " << sym_count
			<< "\n���������� �����: " << lines_count
			<< "\n���������� ������� ����: " << vowels_count
			<< "\n���������� ��������� ����: " << consonants_count
			<< "\n���������� ����: " << digits_count;

		cout << "���������� �� ������ �������� � ���� \"txt_report.txt\"";
	}

	fout.close();
	fin.close();
}

void CompareFiles(const string txt_1, const string txt_2)
{
	string currentstring;
	ifstream fin1, fin2;
	fin1.open(txt_1);
	fin2.open(txt_2);
	string str1, str2;

	if (!fin1.is_open() || !fin2.is_open())
	{
		cout << "������ !\n";
	}
	else
	{
		while (!fin1.eof() && !fin2.eof())
		{
		str1 = str2 = "";
		getline(fin1, str1);
		getline(fin2, str2);
		if (str1 !=str2)
		{
			cout << "Different strings: "<< str1 << "\t|\t" << str2 <<endl;
		}
		}

	}

	fin1.close();
	fin2.close();
}