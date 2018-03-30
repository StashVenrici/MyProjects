#include<iostream>
#include<conio.h>
#include "MyArrow.h"
#include"List.h"
#include<time.h>

using namespace std;

void foo(MyArrow A) {
	A.Show();
}

void f1(List L) {
	cout << "�����������...";
	L.Print();
}

ostream & operator<<(ostream & os, const MyArrow & A)
{
	for (int i = 0; i < A.SIZE; i++) os << A.arr[i] << " ";
	return os;
}

istream & operator>>(istream & is, const MyArrow & A)
{
	cout << "Enter numbers:\n";
	for (int i = 0; i < A.SIZE; i++)
	{
		is >> A.arr[i];
	}
	return is;
}

MyArrow CreateMyArrow(MyArrow& A)
{
	MyArrow TMP(A);
	return TMP;
}

int main(){

	setlocale(LC_ALL, "Russian");
		
	//srand(time(NULL));
	

	/*HW4 ������� 2. �������� � ��� ������������ ����� MyArray ����������� ��������,
		�������� ������������ ��������.*/

	//MyArrow A(5);
	//cout << "A: ";
	//A.Show();
	//MyArrow B(A);	//�������� ����������� ��������, ������ 14 � MyArrow.h
	//cout << "B: ";
	//B.Show();
	//cout << "=====================================\n";
	//MyArrow C, D(7);
	//C = CreateMyArrow(A);	//����� �������� ������� ����������� �������� ������������ ��������, ������ 17 � MyArrow.h
	//cout << "C(A)";
	//C.Show();
	//A = D;		//� ����� ����������� ������� �������� ������������
	//cout << "A=D: ";
	//A.Show();




	/*������� 3. ���������� ����� MyArray, ������� ���������� ��� :
		- ����� ������(���������� >> )
		- �������� ���� : ������_������ + �����
		- �������� ���� : ����� + ������_������
		- ������_������ = ������_������ + ������_������.*/
	

	//MyArrow A(3);
	//cin >> A;	//���������� >>
	//cout << "A: ";
	//A.Show();
	//cout << "=====================================\n";
	//MyArrow X,Y,SUM;
	//X = A + 10;	//���������� ������_������ + �����
	//cout << "X = A+10:\t";	
	//X.Show();
	//cout << "=====================================\n";
	//Y = 20 + X;	//���������� ����� + ������_������ 
	//cout << "20+X:\t";
	//Y.Show();
	//cout << "=====================================\n";
	//SUM = X + Y;
	//cout << "X+Y:\t" <<SUM;




	/*������� 4. �������� � ��� ������������ ����� List(����������� ������) ������:
		- ����� �������� ������ �� ��������
		- ���������� �������� � ������ ������
		- ���������� �������� � ����� ������
		- �������� �������� �� ��������
		- ����������� �����
		- �������� ������������
		- �������� ������������ ��������
		- �������� �������� ���� �������.*/		

		//������� ������ ������
	List lst;
	//�������� ������
	char s[] = "Hello, World !!!\n";
	//������� ������
	cout << s << "\n\n";
	//���������� ����� ������
	int len = strlen(s);
	//�������� ������ � ������
	for (int i = 0; i < len; i++)
		lst.AddEnd(s[i]);
	//������������� ���������� ������
	lst.Print();
	//������� ��� �������� ������
	lst.DelBegin();
	lst.DelBegin();
	lst.DelBegin();
	//��������� � ������ �������
	lst.AddBegin('A');
	//������������� ���������� ������
	lst.Print();
	//����� �������� �� �����������
	cout << "\nfind W: " << lst.FindElement('W');
	//�������� �������� �� ��������
	lst.FindDel('!');
	lst.FindDel('!');
	cout << "\nfind and delete \'!\':  ";
	lst.Print();

	f1(lst);		//�������� ��������� �����������

	cout << "\n�������� operator = :\n";
	List lst_copy;
	lst_copy = lst;
	lst_copy.Print();

	//��������� ��������= �������� � �������� 2� �������
	List sum_lst;
	sum_lst = lst + lst_copy;
	cout << "\nSUM: ";
	sum_lst.Print();



	_getch();
	return 0;
}