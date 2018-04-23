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
		<< "\nРод деятельности: " << occupation << endl << endl;
}


companies::~companies()
{
}

void companies::PushRecord(const string path)
{
	ofstream fout;
	fout.open(path, ofstream::app | ofstream::binary);
	if (!fout.is_open()) cout << "Ошибка открытия файла данных!";
	else
	{
		int size;
		size = this->company_name.length()+1;
		fout.write((char*)&size, sizeof(int));
		fout.write((char*)company_name.c_str(), size);
		
		size = this->owner.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write((char*)owner.c_str(), size);

		size = this->phone_number.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write((char*)phone_number.c_str(), size);

		size = this->address.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write((char*)address.c_str(), size);

		size = this->occupation.length() + 1;
		fout.write((char*)&size, sizeof(int));
		fout.write((char*)occupation.c_str(), size);
	}
	fout.close();
}

void companies::ReadAllRecords(const string path)
{
	char* buf;
	ifstream fin;
	companies agent;
	fin.open(path, ifstream::app | ifstream::binary);
	if (!fin.is_open()) cout << "Ошибка открытия файла данных!";
	else
	{
		while (!fin.eof())
		{
			size_t size;
			fin.read((char*)&size, sizeof(size_t));
			buf = new char[size];
			fin.read(buf, size);
			agent.company_name = buf;
			delete[]buf;

			fin.read((char*)&size, sizeof(size_t));
			buf = new char[size];
			fin.read(buf, size);
			agent.owner = buf;
			delete[]buf;

			fin.read((char*)&size, sizeof(size_t));
			buf = new char[size];
			fin.read(buf, size);
			agent.phone_number = buf;
			delete[]buf;

			fin.read((char*)&size, sizeof(size_t));
			buf = new char[size];
			fin.read(buf, size);
			agent.address = buf;
			delete[]buf;

			fin.read((char*)&size, sizeof(size_t));
			buf = new char[size];
			fin.read(buf, size);
			agent.occupation = buf;
			delete[]buf;
			
			agent.Show();
		}
	}
	fin.close();
}