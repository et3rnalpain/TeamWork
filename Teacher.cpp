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
	cout << "Работа со списком студентов: " << endl;
	cout << "1. Добавить студента " << endl;
	cout << "2. Удалить студента " << endl;
	cout << "3. Вывести список студентов. " << endl;
	cout << "Нажмите 0, чтобы выйти" << endl;
	
	while (ch < 0 || ch > 3)
	{
		system("cls");
		cout << "Неверный ввод." << endl;
		cout << "Работа со списком студентов: " << endl;
		cout << "1. Добавить студента " << endl;
		cout << "2. Удалить студента " << endl;
		cout << "3. Вывести список студентов. " << endl;
		cout << "Нажмите 0, чтобы выйти" << endl;
	}
	do {
		switch (ch)
		{
		case 1: {
			string new_name, new_surname, new_login, new_password;
			cout << "Введите фамилию нового студента: "; cin >> new_surname;
			cout << "Введите имя нового студента: "; cin >> new_name;
			cout << "Введите логин нового студента: "; cin >> new_login;
			cout << "Введите пароль нового студента: "; cin >> new_password;

			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Name = new_name;
			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Surname = new_surname;
			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Login = new_login;
			users[GetQuestionsCount("LogsCyphered") * 6 + 1].Password = new_password;
		}
		case 2: {
			string delete_name, delete_surname, delete_login, delete_password;
			cout << "Введите фамилию студента, которого необходимо удалить: "; cin >> delete_surname;
			cout << "Введите имя нового студента, которого необходимо удалить: "; cin >> delete_name;
			
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
		cout << endl << "Тренинг по теме" << endl << endl;
		cout << "1. Циклы" << endl;
		cout << "2. Массивы" << endl;
		cout << "3. Строки" << endl;
		cout << "4. Рекурсия" << endl;
		cout << "5. Структуры" << endl;
		cout << "6. Файлы" << endl;
		cout << "7. Адреса и указатели" << endl;
		cout << "8. Динамическая память" << endl;
		cout << "0. Выход" << endl;
		cout << "Введите номер темы:" << endl;
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
			cout << "Неверный ввод!" << endl;
		}

		}
	} while (ch1 != 0);

	cout << "Выберите действие: " << endl;
	cout << "1. Удалить вопрос" << endl;
	cout << "2. Добавить вопрос" << endl;
	cout << "3. Изменить вопрос" << endl;
	cout << "Нажмите 0, чтобы выйти" << endl;
	cin >> ch2;

	while (ch2 < 0 || ch2 > 3)
	{
		system("cls");
		cout << "1. Удалить вопрос" << endl;
		cout << "2. Добавить вопрос" << endl;
		cout << "3. Изменить вопрос" << endl;
		cout << "Нажмите 0, чтобы выйти" << endl;
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

	cout << "1. Редактирование вопросов" << endl;
	cout << "2. Работа со списком студентов" << endl;
	cout << "Нажмите 0, чтобы выйти" << endl;
	cin >> ch;

	while (ch < 0 || ch > 2)
	{
		system("cls");
		cout << "Ошибка" << endl;
		cout << "1. Редактирование вопросов" << endl;
		cout << "2. Работа со списком студентов" << endl;
		cout << "Нажмите 0, чтобы выйти" << endl;
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
