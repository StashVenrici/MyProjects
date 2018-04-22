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
	companies();
	companies(
	string cn,
	string ow,
	string pn,
	string ad,
	string oc
	);
	void Show();
	~companies();
	friend void PushRecord(companies cagent, string path);
	friend void ReadAllRecords(string path);
};

