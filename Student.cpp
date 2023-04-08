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