#pragma once
#include "Teacher.h"
#include <iostream>
#include <fstream>
#include <locale.h>


using namespace std;
void TeacherAuthorization()
{
}

void TeacherMenu()
{
	setlocale(LC_ALL, "Rus");
	int ch;
	
	cout << "1. �������������� ��������" << endl;
	cout << "2. ������ �� ������� ���������" << endl;
	cout << "������� 0, ����� �����" << endl;
	cin >> ch;

	while (ch < 0 || ch > 2)
	{
		system("cls");
		cout << "������" << endl;
		cout << "1. �������������� ��������" << endl;
		cout << "2. ������ �� ������� ���������" << endl;
		cout << "������� 0, ����� �����" << endl;
		cin >> ch;
	}

	do {
		switch (ch)
		{
		case 1: QuestionChange(); break;
		case 2: StudentListChange(); break;
		case 0: return; 
		}

	} while (ch != 0);
}

void QuestionChange()
{

}

void StudentListChange()
{
}
