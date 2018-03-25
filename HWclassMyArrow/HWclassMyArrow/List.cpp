#include <iostream>
#include <conio.h>

using namespace std;

#include "List.h"

//--------------------------------------------------
List::List()
{
	Head =  NULL;
	count = 0;
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
		
	//DelAll();
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

