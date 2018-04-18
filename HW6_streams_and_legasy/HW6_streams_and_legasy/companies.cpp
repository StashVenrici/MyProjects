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
	<<"Компания: "<< company_name
	<< "\nВладелец: " << owner
	<< "\nТелефон: " << phone_number
	<< "\nАдрес: " << address
	<< "\nРод деятельности: " << occupation;
}


companies::~companies()
{
}
