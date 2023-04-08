#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;

void StudentMenu()
{
	if (StudentAuthorization() > 0)
	{
		int ch;
		cout << "Меню" << endl;
		cout << "1. Тренинг по теме" << endl;
		cout << "2. Тестирование по теме" << endl;
		cout << "3. Итоговый тест" << endl;
		cout << "Введите пункт меню: "; cin >> ch;
		switch (ch)
		{
		case 1: TrainingMode(); break;
		case 2: TestingMode(); break;
		case 3: ExaminationMode(); break;
		default: cout << "Неверный пункт меню";
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