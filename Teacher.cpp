#pragma once
#include "Teacher.h"
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
#include "FileModule.h"

using namespace std;



void StudentListChange(user users[])
{
	int ch;
	cout << "������ �� ������� ���������: " << endl;
	cout << "1. �������� �������� " << endl;
	cout << "2. ������� �������� " << endl;
	cout << "3. ������� ������ ���������. " << endl;
	cout << "������� 0, ����� �����" << endl;
	
	while (ch < 0 || ch > 3)
	{
		system("cls");
		cout << "�������� ����." << endl;
		cout << "������ �� ������� ���������: " << endl;
		cout << "1. �������� �������� " << endl;
		cout << "2. ������� �������� " << endl;
		cout << "3. ������� ������ ���������. " << endl;
		cout << "������� 0, ����� �����" << endl;
	}
	do {
		switch (ch)
		{
		case 1: {
			string new_name, new_surname, new_login, new_password;
			cout << "������� ������� ������ ��������: "; cin >> new_surname;
			cout << "������� ��� ������ ��������: "; cin >> new_name;
			cout << "������� ����� ������ ��������: "; cin >> new_login;
			cout << "������� ������ ������ ��������: "; cin >> new_password;

			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Name = new_name;
			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Surname = new_surname;
			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Login = new_login;
			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Password = new_password;
		}
		case 2: {
			string delete_name, delete_surname, delete_login, delete_password;
			cout << "������� ������� ��������, �������� ���������� �������: "; cin >> delete_surname;
			cout << "������� ��� ������ ��������, �������� ���������� �������: "; cin >> delete_name;
			
		}

		}
	} while (ch != 0);
}

void QuestionDelete(int theme_num, question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{

}

void QuestionAdd(int theme_num, question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	fstream f;
	int ch1;

	
	return;
}

void QuestionChange(int theme_num, question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{

	return;
}

void QuestionWork(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch1, ch2, theme_num;
	do
	{
		cout << endl << "������� �� ����" << endl << endl;
		cout << "1. �����" << endl;
		cout << "2. �������" << endl;
		cout << "3. ������" << endl;
		cout << "4. ��������" << endl;
		cout << "5. ���������" << endl;
		cout << "6. �����" << endl;
		cout << "7. ������ � ���������" << endl;
		cout << "8. ������������ ������" << endl;
		cout << "0. �����" << endl;
		cout << "������� ����� ����:" << endl;
		cin >> ch1;
		srand(time(NULL));
		switch (ch1)
		{
		case 1: { theme_num = 1; break; }
		case 2: { theme_num = 2; break; }
		case 3: { theme_num = 3; break; }
		case 4: { theme_num = 4; break; }
		case 5: { theme_num = 5; break; }
		case 6: { theme_num = 6; break; }
		case 7: { theme_num = 7; break; }
		case 8: { theme_num = 8; break; }

		case 0: return;

		default: {
			cout << "�������� ����!" << endl;
		}

		}
	} while (ch1 != 0);

	cout << "�������� ��������: " << endl;
	cout << "1. ������� ������" << endl;
	cout << "2. �������� ������" << endl;
	cout << "3. �������� ������" << endl;
	cout << "������� 0, ����� �����" << endl;
	cin >> ch2;

	while (ch2 < 0 || ch2 > 3)
	{
		system("cls");
		cout << "1. ������� ������" << endl;
		cout << "2. �������� ������" << endl;
		cout << "3. �������� ������" << endl;
		cout << "������� 0, ����� �����" << endl;
		cin >> ch2;
	}

	do {
		switch (ch2)
		{
		case 1: QuestionDelete(theme_num, cycles,mass,stroki,recurse,structs,files,adress,dynamic); break;
		case 2: QuestionAdd(theme_num, cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
		case 3: QuestionChange(theme_num, cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
		case 0: return;
		}

	} while (ch2 != 0);
}

void TeacherMenu(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
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
		case 1: QuestionWork(cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
		case 2: StudentListChange(); break;
		case 0: return;
		}

	} while (ch != 0);
}
