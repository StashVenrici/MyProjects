#pragma once

struct Element
{
	char data;				//������
	Element * Next;			//����� ���������� �������� ������
};
//-----------------------------------------------------------------
//����������� ������
class List
{
	Element * Head;			//����� ��������� �������� ������
	int count;				//���������� ��������� ������
public:
	List();					//�����������
	List(const List &L);	//����������� �����
	~List();				//����������
	void AddBegin(char d);		//���������� �������� � ������ ������
	void AddEnd(char d);	//���������� �������� � ������(� �����)
	void DelBegin();		//�������� �������� ������(�������� �������)
	void DelAll();			//�������� ����� ������
	void Print();			//����� ����������� ������(� ������)
	int GetCount();//��������� ���������� ���������,//����������� � ������
	int FindElement(const char d);
	void FindDel(const char d);

	// ���������� ��������(������ ��������) ����� �������� �� ��������� ������� ���������
	void AddAfter(char d, char dd); 

	List& operator=(List &L);


	friend void f1(List L);
};


