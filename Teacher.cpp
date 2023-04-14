#pragma once
#include "Teacher.h"
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
#include "FileModule.h"

using namespace std;



void StudentListChange()
{

}

void QuestionDelete(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{

}

void QuestionAdd(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	fstream f;
	string quest;
	f.open("questions.txt", ios::app);
	if (!f.is_open())
		cout << "Ошибка открытия файла!" << endl;
	else
	{
		cout << "Введите вопрос в формате:" << endl << "question, ans_number1, ans1, ans_number2, ans2, ans_number3, ans3, ans_number4, ans4, correct_ans_number" << endl;
		cin >> quest;
		f >> quest;
	}
	
	return;
}

void QuestionChange(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
}

void QuestListOutput(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	fstream f;
	string text;
	f.open("questions.txt");
	if (!f.is_open())
		cout << "Ошибка открытия файла!" << endl;
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

void QuestionWork(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch;

	cout << "1. Удалить вопрос" << endl;
	cout << "2. Добавить вопрос" << endl;
	cout << "3. Изменить вопрос" << endl;
	cout << "Нажмите 0, чтобы выйти" << endl;
	cin >> ch;

	while (ch < 0 || ch > 3)
	{
		system("cls");
		cout << "1. Удалить вопрос" << endl;
		cout << "2. Добавить вопрос" << endl;
		cout << "3. Изменить вопрос" << endl;
		cout << "Нажмите 0, чтобы выйти" << endl;
		cin >> ch;
	}

	do {
		switch (ch)
		{
		case 1: QuestionDelete(cycles,mass,stroki,recurse,structs,files,adress,dynamic); break;
		case 2: QuestionAdd(cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
		case 3: QuestionChange(cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
		case 0: return;
		}

	} while (ch != 0);
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
		case 1: QuestionChange(cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
		case 2: StudentListChange(); break;
		case 0: return;
		}

	} while (ch != 0);
}
