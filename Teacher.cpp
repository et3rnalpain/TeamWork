#pragma once
#include "Teacher.h"
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
#include <iomanip>
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

	do {
		cin >> ch;

		while (ch < 0 || ch > 3)
		{
			system("cls");
			cout << "Неверный ввод." << endl;
			cout << "Работа со списком студентов: " << endl;
			cout << "1. Добавить студента " << endl;
			cout << "2. Удалить студента " << endl;
			cout << "3. Вывести список студентов. " << endl;
			cout << "Нажмите 0, чтобы выйти" << endl;
			cin >> ch;
		}

		switch (ch)
		{
		case 1: {
			string new_name, new_surname, new_login, new_password;
			cout << "Введите фамилию нового студента: "; cin >> new_surname;
			cout << "Введите имя нового студента: "; cin >> new_name;
			cout << "Введите логин нового студента: "; cin >> new_login;
			cout << "Введите пароль нового студента: "; cin >> new_password;

			users[GetUsersCount("LogsCyphered")].Name = new_name;
			users[GetUsersCount("LogsCyphered")].Surname = new_surname;
			users[GetUsersCount("LogsCyphered")].Login = new_login;
			users[GetUsersCount("LogsCyphered")].Password = new_password;
			users[GetUsersCount("LogsCyphered")].type = "student";
			users[GetUsersCount("LogsCyphered")].o1 = 0;
			users[GetUsersCount("LogsCyphered")].o2 = 0;
			users[GetUsersCount("LogsCyphered")].o3 = 0;
			users[GetUsersCount("LogsCyphered")].o4 = 0;
			users[GetUsersCount("LogsCyphered")].o5 = 0;
			users[GetUsersCount("LogsCyphered")].o6 = 0;
			users[GetUsersCount("LogsCyphered")].o7 = 0;
			users[GetUsersCount("LogsCyphered")].o8 = 0;
			users[GetUsersCount("LogsCyphered")].oi = 0;
			users[GetUsersCount("LogsCyphered")].os = 0;
			UpdateUsersLogs(users);
		}; break;

		case 2: {
			string delete_name, delete_surname;
			cout << "Введите фамилию студента, которого необходимо удалить: "; cin >> delete_surname;
			cout << "Введите имя нового студента, которого необходимо удалить: "; cin >> delete_name;

			for (int i = 0; i < GetUsersCount("LogsCyphered"); i++)
			{
				if (users[i].Surname == delete_surname && users[i].Name == delete_name)
				{
					users[i].Name = users[GetUsersCount("LogsCyphered")].Name;
					users[i].Surname = users[GetUsersCount("LogsCyphered")].Surname;
					users[i].Login = users[GetUsersCount("LogsCyphered")].Login;
					users[i].Password = users[GetUsersCount("LogsCyphered")].Password;

					users[GetUsersCount("LogsCyphered")].Name = " ";
					users[GetUsersCount("LogsCyphered")].Surname = " ";
					users[GetUsersCount("LogsCyphered")].Login = " ";
					users[GetUsersCount("LogsCyphered")].Password = " ";

					users[i].o1 = users[GetUsersCount("LogsCyphered")].o1;
					users[i].o2 = users[GetUsersCount("LogsCyphered")].o2;
					users[i].o3 = users[GetUsersCount("LogsCyphered")].o3;
					users[i].o4 = users[GetUsersCount("LogsCyphered")].o4;
					users[i].o5 = users[GetUsersCount("LogsCyphered")].o5;
					users[i].o6 = users[GetUsersCount("LogsCyphered")].o6;
					users[i].o7 = users[GetUsersCount("LogsCyphered")].o7;
					users[i].o8 = users[GetUsersCount("LogsCyphered")].o8;
					users[i].oi = users[GetUsersCount("LogsCyphered")].oi;
					users[i].os = users[GetUsersCount("LogsCyphered")].os;

					users[GetUsersCount("LogsCyphered")].o1 = 0;
					users[GetUsersCount("LogsCyphered")].o2 = 0;
					users[GetUsersCount("LogsCyphered")].o3 = 0;
					users[GetUsersCount("LogsCyphered")].o4 = 0;
					users[GetUsersCount("LogsCyphered")].o5 = 0;
					users[GetUsersCount("LogsCyphered")].o6 = 0;
					users[GetUsersCount("LogsCyphered")].o7 = 0;
					users[GetUsersCount("LogsCyphered")].o8 = 0;
					users[GetUsersCount("LogsCyphered")].oi = 0;
					users[GetUsersCount("LogsCyphered")].os = 0;
				}
			}
		}; break;

		case 3: 
		{
			cout << "Список студентов: " << endl << endl;

			for (int i = 0; i < GetUsersCount("LogsCyphered"); i++)
			{
				if (users[i].type == "teacher")
					continue;
				cout << users[i].Name << " " << users[i].Surname << endl;
				cout << "Логин: " << users[i].Login << endl;
				cout << "Пароль: " << users[i].Password << endl;
				cout << "Оценки: " << users[i].o1 << " " << users[i].o2 << " " << users[i].o3 << " " << users[i].o4 << " " << users[i].o5
					<< " " << users[i].o6 << " " << users[i].o7 << " " << users[i].o8 << endl;
				cout << "Средний балл: " << users[i].os << endl;
				cout << "Оценка за итоговый тест: " << users[i].oi << endl;

				cout << endl;
			}
		}; break;
		

		}
	} while (ch != 0);
}

void QuestionDelete(int theme_num, question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	string quest, var1, var2, var3, var4, answer;
	int delete_num, delete_count = 0;

	switch (theme_num)
	{

	case 1:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("pasha"); i++)
		{
			cout << i + 1 << ". " << cycles[i].quest << endl;
		}

		do{
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;

			delete_count++;
			cycles[delete_num - 1].quest = cycles[GetQuestionsCount("pasha") - delete_count].quest;
			cycles[delete_num - 1].var1 = cycles[GetQuestionsCount("pasha") - delete_count].var1;
			cycles[delete_num - 1].var2 = cycles[GetQuestionsCount("pasha") - delete_count].var1;
			cycles[delete_num - 1].var3 = cycles[GetQuestionsCount("pasha") - delete_count].var3;
			cycles[delete_num - 1].var4 = cycles[GetQuestionsCount("pasha") - delete_count].var4;
			cycles[delete_num - 1].answer = cycles[GetQuestionsCount("pasha") - delete_count].answer;

			cycles[GetQuestionsCount("pasha") - delete_count].quest = " ";
			cycles[GetQuestionsCount("pasha") - delete_count].var1 = " ";
			cycles[GetQuestionsCount("pasha") - delete_count].var2 = " ";
			cycles[GetQuestionsCount("pasha") - delete_count].var3 = " ";
			cycles[GetQuestionsCount("pasha") - delete_count].var4 = " ";
			cycles[GetQuestionsCount("pasha") - delete_count].answer = " ";
			
			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("pasha") - delete_count; i++)
			{
				cout << i + 1 << ". " << cycles[i].quest << endl;
			}
		} while (delete_num != 0);

		

	}; break;

	case 2:
	{
		for (int i = 0; i < GetQuestionsCount("2questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << mass[i].quest << endl;
		}
	}; break;

	}
}

void QuestionAdd(int theme_num, question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	string quest, var1, var2, var3, var4, answer;

	switch (theme_num)
	{
	case 1:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		cycles[GetQuestionsCount("1questionsCyphered.txt") + 1].quest = quest;
		cycles[GetQuestionsCount("1questionsCyphered.txt") + 1].var1 = var1;
		cycles[GetQuestionsCount("1questionsCyphered.txt") + 1].var2 = var2;
		cycles[GetQuestionsCount("1questionsCyphered.txt") + 1].var3 = var3;
		cycles[GetQuestionsCount("1questionsCyphered.txt") + 1].var4 = var4;
		cycles[GetQuestionsCount("1questionsCyphered.txt") + 1].answer = answer;
	}; break;

	case 2:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		mass[GetQuestionsCount("2questionsCyphered.txt") + 1].quest = quest;
		mass[GetQuestionsCount("2questionsCyphered.txt") + 1].var1 = var1;
		mass[GetQuestionsCount("2questionsCyphered.txt") + 1].var2 = var2;
		mass[GetQuestionsCount("2questionsCyphered.txt") + 1].var3 = var3;
		mass[GetQuestionsCount("2questionsCyphered.txt") + 1].var4 = var4;
		mass[GetQuestionsCount("2questionsCyphered.txt") + 1].answer = answer;
	}

	case 3:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		stroki[GetQuestionsCount("3questionsCyphered.txt") + 1].quest = quest;
		stroki[GetQuestionsCount("3questionsCyphered.txt") + 1].var1 = var1;
		stroki[GetQuestionsCount("3questionsCyphered.txt") + 1].var2 = var2;
		stroki[GetQuestionsCount("3questionsCyphered.txt") + 1].var3 = var3;
		stroki[GetQuestionsCount("3questionsCyphered.txt") + 1].var4 = var4;
		stroki[GetQuestionsCount("3questionsCyphered.txt") + 1].answer = answer;
	}

	case 4:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		recurse[GetQuestionsCount("4questionsCyphered.txt") + 1].quest = quest;
		recurse[GetQuestionsCount("4questionsCyphered.txt") + 1].var1 = var1;
		recurse[GetQuestionsCount("4questionsCyphered.txt") + 1].var2 = var2;
		recurse[GetQuestionsCount("4questionsCyphered.txt") + 1].var3 = var3;
		recurse[GetQuestionsCount("4questionsCyphered.txt") + 1].var4 = var4;
		recurse[GetQuestionsCount("4questionsCyphered.txt") + 1].answer = answer;
	}

	case 5:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		structs[GetQuestionsCount("5questionsCyphered.txt") + 1].quest = quest;
		structs[GetQuestionsCount("5questionsCyphered.txt") + 1].var1 = var1;
		structs[GetQuestionsCount("5questionsCyphered.txt") + 1].var2 = var2;
		structs[GetQuestionsCount("5questionsCyphered.txt") + 1].var3 = var3;
		structs[GetQuestionsCount("5questionsCyphered.txt") + 1].var4 = var4;
		structs[GetQuestionsCount("5questionsCyphered.txt") + 1].answer = answer;
	}

	case 6:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		files[GetQuestionsCount("6questionsCyphered.txt") + 1].quest = quest;
		files[GetQuestionsCount("6questionsCyphered.txt") + 1].var1 = var1;
		files[GetQuestionsCount("6questionsCyphered.txt") + 1].var2 = var2;
		files[GetQuestionsCount("6questionsCyphered.txt") + 1].var3 = var3;
		files[GetQuestionsCount("6questionsCyphered.txt") + 1].var4 = var4;
		files[GetQuestionsCount("6questionsCyphered.txt") + 1].answer = answer;
	}

	case 7:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		adress[GetQuestionsCount("7questionsCyphered.txt") + 1].quest = quest;
		adress[GetQuestionsCount("7questionsCyphered.txt") + 1].var1 = var1;
		adress[GetQuestionsCount("7questionsCyphered.txt") + 1].var2 = var2;
		adress[GetQuestionsCount("7questionsCyphered.txt") + 1].var3 = var3;
		adress[GetQuestionsCount("7questionsCyphered.txt") + 1].var4 = var4;
		adress[GetQuestionsCount("7questionsCyphered.txt") + 1].answer = answer;
	}

	case 8:
	{
		cout << "Введите вопрос: " << endl;
		cin >> quest;
		cout << "Введите варианты ответа: " << endl;
		cout << "1. "; cin >> var1;
		cout << "2. "; cin >> var2;
		cout << "3. "; cin >> var3;
		cout << "4. "; cin >> var4;

		cout << "Введите номер правильного варианта ответа: "; cin >> answer;

		dynamic[GetQuestionsCount("8questionsCyphered.txt") + 1].quest = quest;
		dynamic[GetQuestionsCount("8questionsCyphered.txt") + 1].var1 = var1;
		dynamic[GetQuestionsCount("8questionsCyphered.txt") + 1].var2 = var2;
		dynamic[GetQuestionsCount("8questionsCyphered.txt") + 1].var3 = var3;
		dynamic[GetQuestionsCount("8questionsCyphered.txt") + 1].var4 = var4;
		dynamic[GetQuestionsCount("8questionsCyphered.txt") + 1].answer = answer;
	}
	}

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

		default: 
		{
			cout << "Неверный ввод!" << endl;
		}

		}

		system("cls");

		cout << "Выберите действие: " << endl;
		cout << "1. Удалить вопрос" << endl;
		cout << "2. Добавить вопрос" << endl;
		cout << "3. Изменить вопрос" << endl;
		cout << "Нажмите 0, чтобы выйти" << endl;
		

		do {
			cin >> ch2;

			while (ch2 < 0 || ch2 > 3)
			{
				system("cls");
				cout << "Неверный ввод!" << endl;
				cout << "Выберите действие: " << endl;
				cout << "1. Удалить вопрос" << endl;
				cout << "2. Добавить вопрос" << endl;
				cout << "3. Изменить вопрос" << endl;
				cout << "Нажмите 0, чтобы выйти" << endl;
				cin >> ch2;
			}
			switch (ch2)
			{
			case 1: {system("cls"); QuestionDelete(theme_num, cycles, mass, stroki, recurse, structs, files, adress, dynamic); break; }
			case 2: {system("cls"); QuestionAdd(theme_num, cycles, mass, stroki, recurse, structs, files, adress, dynamic); break; }
			case 3: {system("cls"); QuestionChange(theme_num, cycles, mass, stroki, recurse, structs, files, adress, dynamic); break; }
			case 0: return;
			}

		} while (ch2 != 0);
	} while (ch1 != 0);

	
}

void TeacherMenu(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[], user users[])
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
		case 2: StudentListChange(users); break;
		case 0: return;
		}

	} while (ch != 0);
}
