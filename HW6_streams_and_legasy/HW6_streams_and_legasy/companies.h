#pragma once
#include<iostream>
#include<string>

using namespace std;

class companies
{
	string company_name;
	string owner;
	string phone_number;
	string address;
	string occupation;
public:
	companies(
	string cn,
	string ow,
	string pn,
	string ad,
	string oc
	);
	void Show();
	void PushRecord(string path = "myBase.cdb");
	void ReadAllRecords(string path = "myBase.cdb");
	~companies();
};

