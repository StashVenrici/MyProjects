#include<iostream>
#include<conio.h>
#include<fstream>
#include"companies.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	/*������� 1. ��������� ������, �������� ����� ���������� �� ���������� ������ :
	1. �������� �����;
	2. ��������;
	3. �������;
	4. �����;
	5. ��� ������������.
		����������� ��������� ����������� :
	1. ����� �� ��������;
	2. ����� �� ���������;
	3. ����� �� ������ ��������;
	4. ����� �� ���� ������������;
	5. ����� ���� ������� � ����������.
		��� ����������, ������ ����������� � �����, ������ ���� ����������� �����������
		���������� ����� ������.*/

	string datafile = "myBase.cdb";  //���� � ������� �� ���������

	//������ ���������� ������
		companies exm("��������", "����2", "22-22-32-3", "���������� ���, ���. ������ 4", "���������������� 5");

	//���������� ������ � ����� �����
	exm.PushRecord(datafile);
	//������ ���� ������� �� �����
	//exm.ReadAllRecords(datafile);

	//����� �� ___
	exm.Findby___(datafile, "����", find_name);  //�� ����� �������??




	
	






	_getch();
	return 0;
}

