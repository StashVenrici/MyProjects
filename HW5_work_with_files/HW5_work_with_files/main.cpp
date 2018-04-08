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

		//��� ����� �� ��������� ������� �������
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

int main()
{
	setlocale(LC_ALL, "Russian");
	/*������� 1. ��� ��������� ����. ���������� ������� ����� ���� � �������� � ����
		��������� ���������� �� ��������� ����� :
	-���������� ��������;
	-���������� �����;
	-���������� ������� ����;
	-���������� ��������� ����;
	-���������� ����.*/

	string txt_file;

	cout << "���������� �������� � ������. ������� ���� � ���������� �����: ";
	getline(cin, txt_file);
	GetTxtStatistic(txt_file);
	



	_getch();
	return 0;
}