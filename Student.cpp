#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <string>
#include <fstream>
using namespace std;
struct answer
{
	char quest[50], v1[15], v2[15], v3[15], v4[15];
	int k;
};
int StudentAuthorization()
{
	return 1;
}

void StudentMenu()
{
	if (StudentAuthorization() > 0)
	{
		int ch;
		cout << "����" << endl;
		cout << "1. ������� �� ����" << endl;
		cout << "2. ������������ �� ����" << endl;
		cout << "3. �������� ����" << endl;
		cout << "������� ����� ����: "; cin >> ch;
		switch (ch)
		{
		case 1: TrainingMode(); break;
		case 2: TestingMode(); break;
		case 3: ExaminationMode(); break;
		default: cout << "�������� ����� ����";
		}
	}
}

void TrainingMode()
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
	answer quest[30];
	FILE* my_file = fopen("1.Cikl.txt", "r");
	for (int i = 0; i < 2; i++)
	{
		fgets(quest[i].quest, 100, my_file); 
		puts(quest[i].quest); 
	}
	fclose(my_file);
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