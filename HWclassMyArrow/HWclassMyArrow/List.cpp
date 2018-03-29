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

//--------------------------------------------------конструктор копий
List::List(const List & L)
{
	Head = nullptr;
	Element *temp = L.Head;		//создаем указатель на Head донора
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
	cout << "\nДеструктор List\n";
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
	//Возвращаем количество элементов
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
	Element * temp = new Element;		//создание нового элемента
	temp->data = data;					//заполнение данными
	temp->Next = NULL;					//следующий элемент отсутствует
	
	//новый элемент становится последним элементом списка,
	//если он не первый добавленный
	if (Head != NULL) {

		Element *t = Head;
		while (t->Next != NULL)
		{
			t = t->Next;
		}
		t->Next = temp;
	}
	//новый элемент становится единственным,
	//если он первый добавленный
	else {
		Head = temp;
	}
	count++;
}

//--------------------------------------------------
void List::DelBegin()
{
	Element * temp = Head;			//запоминаем адрес головного элемента
	Head = Head->Next;				//перебрасываем голову на следующий элемент
	delete temp;					//удаляем бывший головной элемент
	count--;
}

//--------------------------------------------------
void List::DelAll()
{
	//Пока еще есть элементы
	while (Head != 0)
		DelBegin();//Удаляем элементы по одному
	count = 0;
}

//--------------------------------------------------
void List::Print()
{
	if (Head)
	{
		Element * temp = Head;		    //запоминаем адрес головного элемента
		while (temp != 0)				//Пока еще есть элементы
		{
			cout << temp->data << " ";	//Выводим данные
			temp = temp->Next;			//Переходим на следующий элемент
		}
		cout << "\n";
	}
	else cout << "\nСписок пуст\n";
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

	DelAll();					//очищаем
	Element *temp = L.Head;		//создаем указатель на Head донора
	if (temp == nullptr) return *this;		//на случай, если список-донор пустой
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

//=====оператор присваивания с перемещением=====
List & List::operator=(List && L)
{
	DelAll();					//очищаем
	Element *temp = L.Head;		//создаем указатель на Head донора
	Head = nullptr;				//создаем пустой объект
	if (temp == nullptr) return *this;		//на случай, если список-донор пустой
	else
	{
		while (temp != nullptr)
		{
			this->AddEnd(temp->data);
			temp = temp->Next;
		}
	}
	L.DelAll();				//очищаем донор
}

List List::operator+(const List & L)
{
	List tmp;
	Element *temp = this->Head;
	if (temp != nullptr)		//копируем первый список
	{
		while (temp->Next != nullptr)		//ВНИМАНИЕ! здесь цикл срабатывает до предпоследнего элемента списка
		{									//это нужно, чтобы не скопировался "\n"
			tmp.AddEnd(temp->data);
			temp = temp->Next;
		}
	}
	temp = L.Head;
	if (temp != nullptr)		//копируем второй список
	{
		while (temp != nullptr)
		{
			tmp.AddEnd(temp->data);
			temp = temp->Next;
		}
	}

	return tmp;
}