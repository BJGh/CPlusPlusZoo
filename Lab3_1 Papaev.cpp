#include "stdlib.h"
#include "stdio.h"
#include "cmath"
#include "locale.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double x, y;
	bool n = y < x && y > 0 && pow(x,2)+pow(y,2)<1 || x < -3 || pow(x,2)+pow(y,2)<1&&y<-x|| pow(x,2)+pow(y,2)<1&&y < 0 && y>-x;// ������������� ���������� ���������� ������ ��������� if
	cout << "����� ���������: ������ �����-������ ����������, 12 �������, ����-10-18\n���������� ������� ��������������� �������������� ���������\n���������� ������� ����� �,� � ��������� �������� �� ��� � ��������� �������\n";
	cout << "������� ���������� ����� �,�" << endl;
	cin >> x >> y;
	if ((y < x && y > 0 && pow(x,2)+pow(y,2)<1) || (x < -3) ||( pow(x,2)+pow(y,2)<1&&y<-x)||( pow(x,2)+pow(y,2)<1&&y < 0 && y>-x))	{
		cout << "����� ����������� ��������� �������" << endl;
	}
	else
	{
		cout << "����� �� ����������� ��������� �������" << endl;
	}//������������� ��������� if  � ��������
	if (n=true)	{
		cout << "����� ����������� ��������� �������" << endl;
	}
	else
	{
		cout << "����� �� ����������� ��������� �������" << endl;
	}// ������������� ���������� ���������� ������ ��������� if
	if (n=true)	{
		cout << "����� ����������� ��������� �������\n" <<"�������� ���������� ���������� n="<<n <<endl;
	}
	else
	{
		cout << "����� �� ����������� ��������� �������" <<"�������� ���������� ���������� n="<<n << endl;
	}// ������������� ���������� ���������� ������ ��������� if
	system("pause");
	return 0;
}

