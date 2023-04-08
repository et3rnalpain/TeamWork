#pragma once
#include "Teacher.h"
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>


using namespace std;

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

void QuestionWork()
{
	int ch;

	cout << "1. ������� ������" << endl;
	cout << "2. �������� ������" << endl;
	cout << "3. �������� ������" << endl;
	cout << "������� 0, ����� �����" << endl;
	cin >> ch;

	while (ch < 0 || ch > 3)
	{
		system("cls");
		cout << "1. ������� ������" << endl;
		cout << "2. �������� ������" << endl;
		cout << "3. �������� ������" << endl;
		cout << "������� 0, ����� �����" << endl;
		cin >> ch;
	}

	do {
		switch (ch)
		{
		case 1: QuestionDelete(); break;
		case 2: QuestionAdd(); break;
		case 3: QuestionChange(); break;
		case 0: return;
		}

	} while (ch != 0);
}

void StudentListChange()
{
}

void QuestionDelete()
{
	/*ifstream f1;
	ofstream f2;
	string a;
	
	int k = 0;
	f1.open("questions.txt");
	if (!f1.is_open())
		cout << "������ �������� �����!" << endl;
	else
	{

	}*/
}

void QuestionAdd()
{
	fstream f;
	string quest;
	f.open("questions.txt", ios::app);
	if (!f.is_open())
		cout << "������ �������� �����!" << endl;
	else
	{
		cout << "������� ������ � �������:" << endl << "question, ans_number1, ans1, ans_number2, ans2, ans_number3, ans3, ans_number4, ans4, correct_ans_number" << endl;
		cin >> quest;
		f >> quest;
	}
	
	return;
}

void QuestionChange()
{
}

void QuestListOutput()
{
	fstream f;
	string text;
	f.open("questions.txt");
	if (!f.is_open())
		cout << "������ �������� �����!" << endl;
	else
	{
		while (!f.eof())
		{
			f >> text;
			cout << text;
		}	
	}

	return;
}
