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
	<<"Компания: "<< company_name
	<< "\nВладелец: " << owner
	<< "\nТелефон: " << phone_number
	<< "\nАдрес: " << address
	<< "\nРод деятельности: " << occupation << endl;
}

void companies::PushRecord(string path = "myBase.cdb")
{
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open()) cout << "Ошибка открытия файла данных!";
	else
	{
		fout.write((char*)(this), sizeof(companies));
	}
	fout.close();
}

void companies::ReadAllRecords(string path = "myBase.cdb")
{
	//как не использовать при чтении из файла какой-то конкретный объект класса?
	// сделать френд?
	
	ifstream fin;
	fin.open(path, ofstream::app);
	if (!fin.is_open()) cout << "Ошибка открытия файла данных!";
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
