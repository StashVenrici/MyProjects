#include "companies.h"
#include <string>
#include<fstream>


companies::companies(
	string cn = "",
	string ow = "",
	string pn = "",
	string ad = "",
	string oc = ""
)
{
	company_name = cn;
	owner = ow;
	phone_number = pn;
	address = ad;
	occupation = oc;
}

void companies::Show()
{
	cout
	<<"��������: "<< company_name
	<< "\n��������: " << owner
	<< "\n�������: " << phone_number
	<< "\n�����: " << address
	<< "\n��� ������������: " << occupation << endl;
}

void companies::PushRecord(string path = "myBase.cdb")
{
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open()) cout << "������ �������� ����� ������!";
	else
	{
		fout.write((char*)(this), sizeof(companies));
	}
	fout.close();
}

void companies::ReadAllRecords(string path = "myBase.cdb")
{
	//��� �� ������������ ��� ������ �� ����� �����-�� ���������� ������ ������?
	// ������� �����?
	
	ifstream fin;
	fin.open(path, ofstream::app);
	if (!fin.is_open()) cout << "������ �������� ����� ������!";
	else
	{
		while (fin.read((char*)(this), sizeof(companies)))
		{
			this->Show();
		}
	}
	fin.close();
}

companies::~companies()
{
}
