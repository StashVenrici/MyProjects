#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

void GetTxtStatistic(const string txt_file);

void GetTxtStatistic(const string txt_file)
{
	//�������� ���������� �����-������
	ofstream fout;
	fout.open("txt_report.txt");

	if (!fout.is_open())
	{
		cout << "������ ������ � ����!\n";
	}
	else
	{
		fout << "TODO: ����������";
	}
	
	fout.close();	//��������� ����
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

	
	GetTxtStatistic("test");



	_getch();
	return 0;
}