#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <string>
#include <fstream>
#include "FileModule.h"
using namespace std;
/*struct answer
{
	char quest[50], v1[15], v2[15], v3[15], v4[15];
	int k;
};*/



void TrainingMode(question cycles[]/*, question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])*/)
{
	int ch1, answer;

	cout << "1. Циклы" << endl;
	cout << "2. Массивы" << endl;
	cout << "3. Строки" << endl;
	cout << "4. Рекурсия" << endl;
	cout << "5. Структуры" << endl;
	cout << "6. Файлы" << endl;
	cout << "7. Адреса и указатели" << endl;
	cout << "8. Динамическая память" << endl;
	cout << "Введите номер темы:" << endl;
	cin >> ch1;
	switch (ch1) 
	{
	case 1: 
	{
		for (int i = 0; i < 10; i++) 
		{
			cout << cycles[i].quest << endl << cycles[i].var1 << endl << cycles[i].var2 << endl << cycles[i].var3 << endl << cycles[i].var4 << endl;
			cin >> answer;
		}
	};
	break;
	}
	
}

void TestingMode()
{
	int ch;
	cout << "1. Циклы" << endl;
	cout << "2. Массивы" << endl;
	cout << "3. Строки" << endl;
	cout << "4. Рекурсия" << endl;
	cout << "5. Структуры" << endl;
	cout << "6. Файлы" << endl;
	cout << "7. Адреса и указатели" << endl;
	cout << "8. Динамическая память" << endl;
	cout << "Введите номер темы:" << endl;
	cin >> ch;
}

void ExaminationMode()
{
}

void StudentMenu(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch;
	cout << "Меню" << endl;
	cout << "1. Тренинг по теме" << endl;
	cout << "2. Тестирование по теме" << endl;
	cout << "3. Итоговый тест" << endl;
	cout << "Введите пункт меню: "; cin >> ch;
	switch (ch)
	{
	case 1: TrainingMode(cycles); break;
	case 2: TestingMode(); break;
	case 3: ExaminationMode(); break;
	default: cout << "Неверный пункт меню";
	}
}
