#include "companies.h"
#include <string>
#include<fstream>

companies::companies()
{
	company_name = "";
	owner = "";
	phone_number = "";
	address = "";
	occupation = "";
}



companies::companies(string cn, string ow, string pn, string ad, string oc)
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
		<< "Компания: " << company_name
		<< "\nВладелец: " << owner
		<< "\nТелефон: " << phone_number
		<< "\nАдрес: " << address
		<< "\nРод деятельности: " << occupation << endl;
}


companies::~companies()
{
}

void PushRecord(companies agent, string path)
{
	ofstream fout;
	fout.open(path, ofstream::app | ofstream::binary);
	if (!fout.is_open()) cout << "Ошибка открытия файла данных!";
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

void ReadAllRecords(string path)
{
	ifstream fin;
	companies agent;
	fin.open(path, ifstream::app | ifstream::binary);
	if (!fin.is_open()) cout << "Ошибка открытия файла данных!";
	else
	{
		while (!fin.eof())
		{
			int size;
			fin.read((char*)&size, sizeof(int));
			fin.read((char*)agent.company_name.c_str(), size);

			fin.read((char*)&size, sizeof(int));
			fin.read((char*)agent.owner.c_str(), size);

			fin.read((char*)&size, sizeof(int));
			fin.read((char*)agent.phone_number.c_str(), size);

			fin.read((char*)&size, sizeof(int));
			fin.read((char*)agent.address.c_str(), size);

			fin.read((char*)&size, sizeof(int));
			fin.read((char*)agent.occupation.c_str(), size);

			agent.Show();
		}
	}
	fin.close();
}

