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
		<< "��������: " << company_name
		<< "\n��������: " << owner
		<< "\n�������: " << phone_number
		<< "\n�����: " << address
		<< "\n��� ������������: " << occupation << endl;
}

void PushRecord(companies agent, string path)
{
	ofstream fout;
	fout.open(path, ofstream::app | ofstream::binary);
	if (!fout.is_open()) cout << "������ �������� ����� ������!";
	else
	{
		int size;
		size = agent.company_name.length()+1;
		fout.write((char*)&size, sizeof(int));
		fout.write(agent.company_name.c_str(), size);
		
		size = agent.owner.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write(agent.owner.c_str(), size);

		size = agent.phone_number.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write(agent.phone_number.c_str(), size);

		size = agent.address.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write(agent.address.c_str(), size);

		size = agent.occupation.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write(agent.occupation.c_str(), size);
	}
	fout.close();
}

void companies::ReadAllRecords(string path)
{
	//��� �� ������������ ��� ������ �� ����� �����-�� ���������� ������ ������?
	// ������� �����?

	ifstream fin;
	companies agent;
	fin.open(path, ifstream::app | ifstream::binary);
	if (!fin.is_open()) cout << "������ �������� ����� ������!";
	else
	{
		while (fin.read((char*)&agent, sizeof(companies)))
		{
			agent.Show();
		}
	}
	fin.close();
}

companies::~companies()
{
}
