#include <iostream>
#include <conio.h>

using namespace std;

#include "List.h"

//--------------------------------------------------
List::List()
{
	Head =  nullptr;
	count = 0;
}

//--------------------------------------------------����������� �����
List::List(const List & L)
{
	Head = nullptr;
	Element *temp = L.Head;		//������� ��������� �� Head ������
	if (temp != nullptr) 
		while (temp != nullptr)
		{
			this->AddEnd(temp->data);
			temp = temp->Next;
		}
}

//--------------------------------------------------
List::~List()
{
	cout << "\n���������� List\n";
	Element *e = Head;
	Element *t = e;

	while (e != NULL)
	{
		t = e->Next;
		delete e;
		e = t;
	}
	Head = 0;
}

//--------------------------------------------------
int List::GetCount()
{
	//���������� ���������� ���������
	return count;
}

//--------------------------------------------------

void List::AddBegin(char data)
{
	Element *t = new Element;
	t->data = data;
	t->Next = Head;
	Head = t;
}


void List::AddEnd(char data)
{
	Element * temp = new Element;		//�������� ������ ��������
	temp->data = data;					//���������� �������
	temp->Next = NULL;					//��������� ������� �����������
	
	//����� ������� ���������� ��������� ��������� ������,
	//���� �� �� ������ �����������
	if (Head != NULL) {

		Element *t = Head;
		while (t->Next != NULL)
		{
			t = t->Next;
		}
		t->Next = temp;
	}
	//����� ������� ���������� ������������,
	//���� �� ������ �����������
	else {
		Head = temp;
	}
	count++;
}

//--------------------------------------------------
void List::DelBegin()
{
	Element * temp = Head;			//���������� ����� ��������� ��������
	Head = Head->Next;				//������������� ������ �� ��������� �������
	delete temp;					//������� ������ �������� �������
	count--;
}

//--------------------------------------------------
void List::DelAll()
{
	//���� ��� ���� ��������
	while (Head != 0)
		DelBegin();//������� �������� �� ������
	count = 0;
}

//--------------------------------------------------
void List::Print()
{
	if (Head)
	{
		Element * temp = Head;		    //���������� ����� ��������� ��������
		while (temp != 0)				//���� ��� ���� ��������
		{
			cout << temp->data << " ";	//������� ������
			temp = temp->Next;			//��������� �� ��������� �������
		}
		cout << "\n";
	}
	else cout << "\n������ ����\n";
}
//---------------------------------------------------------------------
void List::AddAfter(char d, char dd)
{
	Element * e = new Element;
	e->data = dd;
	e->Next = NULL;

	if (Head == NULL) Head = e;
	else {
		Element *t = Head;
		while (t->data != d) t = t->Next;

		e->Next = t->Next;
		t->Next = e;
	}
	count++;
}

int List::FindElement(const char d)
{
	Element * temp = Head;
	int counter = 0;
		while (temp != nullptr)
		{
			if (temp->data == d) return counter;
			else 
			{
				counter++;
				temp = temp->Next;
			}
		}
	
	return -1;
}

void List::FindDel(const char d)
{
	Element * temp = Head;
	if (temp->data == d) DelBegin();
	else
	{
	Element * tnext = temp->Next;

		while (tnext != nullptr)
		{
			if (tnext->data == d)
			{
				temp->Next = tnext->Next;
				delete tnext;
				break;
			}
			else
			{
				temp = tnext;
				tnext = tnext->Next;
			}
		}
	}
}

List & List::operator=(List & L)
{
	if (this == &L)
		return *this;

	DelAll();					//�������
	Element *temp = L.Head;		//������� ��������� �� Head ������
	if (temp == nullptr) return *this;		//�� ������, ���� ������-����� ������
	else
	{
		while (temp != nullptr)
		{
			this->AddEnd(temp->data);
			temp = temp->Next;
		}
	}


	return *this;
}

//=====�������� ������������ � ������������=====
List & List::operator=(List && L)
{
	DelAll();					//�������
	Element *temp = L.Head;		//������� ��������� �� Head ������
	Head = nullptr;				//������� ������ ������
	if (temp == nullptr) return *this;		//�� ������, ���� ������-����� ������
	else
	{
		while (temp != nullptr)
		{
			this->AddEnd(temp->data);
			temp = temp->Next;
		}
	}
	L.DelAll();				//������� �����
}

List List::operator+(const List & L)
{
	List tmp;
	Element *temp = this->Head;
	if (temp != nullptr)		//�������� ������ ������
	{
		while (temp->Next != nullptr)		//��������! ����� ���� ����������� �� �������������� �������� ������
		{									//��� �����, ����� �� ������������ "\n"
			tmp.AddEnd(temp->data);
			temp = temp->Next;
		}
	}
	temp = L.Head;
	if (temp != nullptr)		//�������� ������ ������
	{
		while (temp != nullptr)
		{
			tmp.AddEnd(temp->data);
			temp = temp->Next;
		}
	}

	return tmp;
}