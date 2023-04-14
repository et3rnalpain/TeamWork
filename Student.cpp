#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <string>
#include <fstream>
#include <ctime>
#include "FileModule.h"
using namespace std;

void TrainingMode(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch1, answer;
	int j;
	
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
		case 1:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << cycles[j].quest << endl << cycles[j].var1 << endl << cycles[j].var2 << endl << cycles[j].var3 << endl << cycles[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(cycles[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(cycles[j].answer));
			}
		} break;
		case 2:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << mass[j].quest << endl << mass[j].var1 << endl << mass[j].var2 << endl << mass[j].var3 << endl << mass[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(mass[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(mass[j].answer));
			}
		} break;
		case 3:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << stroki[j].quest << endl << stroki[j].var1 << endl << stroki[j].var2 << endl << stroki[j].var3 << endl << stroki[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(stroki[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(stroki[j].answer));
			}
		} break;
		case 4:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << recurse[j].quest << endl << recurse[j].var1 << endl << recurse[j].var2 << endl << recurse[j].var3 << endl << recurse[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(recurse[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(recurse[j].answer));
			}
		} break;
		case 5:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << structs[j].quest << endl << structs[j].var1 << endl << structs[j].var2 << endl << structs[j].var3 << endl << structs[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(structs[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(structs[j].answer));
			}
		} break;
		case 6:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << files[j].quest << endl << files[j].var1 << endl << files[j].var2 << endl << files[j].var3 << endl << files[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(files[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(files[j].answer));
			}
		} break;
		case 7:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << adress[j].quest << endl << adress[j].var1 << endl << adress[j].var2 << endl << adress[j].var3 << endl << adress[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(adress[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(adress[j].answer));
			}
		} break;
		case 8:
		{
			for (int i = 0; i < 10; i++)
			{
				j = rand() % 30;
				cout << dynamic[j].quest << endl << dynamic[j].var1 << endl << dynamic[j].var2 << endl << dynamic[j].var3 << endl << dynamic[j].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(dynamic[j].answer)) cout << "�������, �������� ��� ���!" << endl;
				} while (answer != stoi(dynamic[j].answer));
			}
		} break;
		case 0: break;
		default: cout << endl << "������� ����� ����� ����" << endl;
		}
	}while (ch1 != 0);
	return;

}

void TestingMode()
{
	int ch;
	cout << "1. �����" << endl;
	cout << "2. �������" << endl;
	cout << "3. ������" << endl;
	cout << "4. ��������" << endl;
	cout << "5. ���������" << endl;
	cout << "6. �����" << endl;
	cout << "7. ������ � ���������" << endl;
	cout << "8. ������������ ������" << endl;
	cout << "������� ����� ����:" << endl;
	cin >> ch;
}

void ExaminationMode()
{
}

void StudentMenu(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch;
	cout << "����" << endl;
	cout << "1. ������� �� ����" << endl;
	cout << "2. ������������ �� ����" << endl;
	cout << "3. �������� ����" << endl;
	cout << "������� ����� ����: "; cin >> ch;
	switch (ch)
	{
	case 1: TrainingMode(cycles, mass, stroki, recurse, structs,files,adress,dynamic); break;
	case 2: TestingMode(); break;
	case 3: ExaminationMode(); break;
	default: cout << "�������� ����� ����";
	}
}
