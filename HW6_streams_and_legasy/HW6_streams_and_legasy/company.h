#pragma once
#include<iostream>
#include<string>

using namespace std;

class company
{
	string company_name;
	string owner;
	string phone_number;
	string address;
	string occupation;
public:
	company(
	string cn,
	string ow,
	string pn,
	string ad,
	string oc
	);
	~company();
};

