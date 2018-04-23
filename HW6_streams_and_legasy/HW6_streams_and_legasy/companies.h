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
	static int count;
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
	void PushRecord(const string path);
	void ReadAllRecords(const string path);
};

