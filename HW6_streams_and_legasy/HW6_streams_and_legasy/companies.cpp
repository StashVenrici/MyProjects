#include "companies.h"
#include <string>


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
	<< "\n��� ������������: " << occupation;
}


companies::~companies()
{
}
