#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;

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
}

void TestingMode()
{
}

void ExaminationMode()
{
}