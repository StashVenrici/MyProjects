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
	/*������� 1. ��� ��������� ����. ���������� ������� ����� ���� � �������� � ����
		��������� ���������� �� ��������� ����� :
	-���������� ��������;
	-���������� �����;
	-���������� ������� ����;
	-���������� ��������� ����;
	-���������� ����.*/

	/*string txt_file;
	cout << "���������� �������� � ������. ������� ���� � ���������� �����: ";
	getline(cin, txt_file);
	GetTxtStatistic(txt_file);*/


	/*������� 2. ���� ��� ��������� �����.��������, ��������� �� �� ������.���� ���, ��
		������� �� ����� ������������� ������ �� ������� �����.*/

	//CompareFiles("test1.txt", "test2.txt");


	/*������� 3. ��� ��������� ����.����� ����� ����� ������� ������.*/

	//cout << "Max = " << MaxFileString("test_length.txt");


	/*������� 4. ��� ��������� ����.��������� ������� ��� � ��� ����������� ��������
		������������� �����.*/

	//cout << "������� ���������: "<< FindStr("find_test.txt", "qwerty") << " ���";

	



	_getch();
	return 0;
}