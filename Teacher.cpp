#pragma once
#include "Teacher.h"
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
#include <iomanip>
#include "FileModule.h"
#include <stdio.h>

using namespace std;

void StudentListChange(user users[])
{
	int ch2;
	do {
		cout << "Работа со списком студентов: " << endl;
		cout << "1. Добавить студента " << endl;
		cout << "2. Удалить студента " << endl;
		cout << "3. Вывести список студентов. " << endl;
		cout << "Нажмите 0, чтобы выйти" << endl;
		cin >> ch2;
		switch (ch2)
		{
		case 1: {
			int index = GetUsersCount("LogsCyphered");
			string new_name, new_surname, new_login, new_password;
			cout << "Введите фамилию нового студента: "; cin >> new_surname;
			cout << "Введите имя нового студента: "; cin >> new_name;
			cout << "Введите логин нового студента: "; cin >> new_login;
			cout << "Введите пароль нового студента: "; cin >> new_password;
			users[index].Name = new_name;
			users[index].Surname = new_surname;
			users[index].Login = new_login;
			users[index].Password = new_password;
			users[index].type = "student";
			users[index].o1 = "0";
			users[index].o2 = "0";
			users[index].o3 = "0";
			users[index].o4 = "0";
			users[index].o5 = "0";
			users[index].o6 = "0";
			users[index].o7 = "0";
			users[index].o8 = "0";
			users[index].oi = "0";
			users[index].os = "0";
			UpdateUsersLogs(users, 1);
		}; break;

		case 2: {
			string delete_name, delete_surname;
			cout << "Введите фамилию студента, которого необходимо удалить: "; cin >> delete_surname;
			cout << "Введите имя нового студента, которого необходимо удалить: "; cin >> delete_name;

			for (int i = 0; i < GetUsersCount("LogsCyphered"); i++)
			{
				if (users[i].Surname == delete_surname && users[i].Name == delete_name)
				{
					users[i].Name = "";
					users[i].Surname = "";
					users[i].Login = "";
					users[i].Password = "";
					users[i].type = "";
					users[i].o1 = "";
					users[i].o2 = "";
					users[i].o3 = "";
					users[i].o4 = "";
					users[i].o5 = "";
					users[i].o6 = "";
					users[i].o7 = "";
					users[i].o8 = "";
					users[i].oi = "";
					users[i].os = "";
					
				}

			}
			UpdateUsersLogs(users, 1);
		}; break;

		case 3: 
		{
			cout << "Список студентов: " << endl << endl;

			for (int i = 0; i < GetUsersCount("LogsCyphered")+1; i++)
			{
				if (users[i].type == "teacher" || users[i].Login == users[i].os)
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
		case 0: return;
		}
	} while (ch2 != 0);
	return;
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
		for (int i = 0; i < GetQuestionsCount("1questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << cycles[i].quest << endl;
		}

		do{
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			cycles[delete_num - 1].quest = " ";
			cycles[delete_num - 1].var1 = " ";
			cycles[delete_num - 1].var2 = " ";
			cycles[delete_num - 1].var3 = " ";
			cycles[delete_num - 1].var4 = " ";
			cycles[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("1questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << cycles[i].quest << endl;
			}
			UpdateQuestionsFile(cycles,"1questionsCyphered",0);
			DownloadingQuestions(cycles, "1questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;

	case 2:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("2questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << mass[i].quest << endl;
		}

		do {
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			mass[delete_num - 1].quest = " ";
			mass[delete_num - 1].var1 = " ";
			mass[delete_num - 1].var2 = " ";
			mass[delete_num - 1].var3 = " ";
			mass[delete_num - 1].var4 = " ";
			mass[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("2questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << mass[i].quest << endl;
			}
			UpdateQuestionsFile(mass, "2questionsCyphered", delete_num * (-1));
			DownloadingQuestions(mass, "2questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;

	case 3:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("3questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << stroki[i].quest << endl;
		}

		do {
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			stroki[delete_num - 1].quest = " ";
			stroki[delete_num - 1].var1 = " ";
			stroki[delete_num - 1].var2 = " ";
			stroki[delete_num - 1].var3 = " ";
			stroki[delete_num - 1].var4 = " ";
			stroki[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("3questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << stroki[i].quest << endl;
			}
			UpdateQuestionsFile(stroki, "3questionsCyphered", delete_num * (-1));
			DownloadingQuestions(stroki, "3questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;

	case 4:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("4questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << recurse[i].quest << endl;
		}

		do {
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			recurse[delete_num - 1].quest = " ";
			recurse[delete_num - 1].var1 = " ";
			recurse[delete_num - 1].var2 = " ";
			recurse[delete_num - 1].var3 = " ";
			recurse[delete_num - 1].var4 = " ";
			recurse[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("4questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << recurse[i].quest << endl;
			}
			UpdateQuestionsFile(recurse, "4questionsCyphered", delete_num * (-1));
			DownloadingQuestions(recurse, "4questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;

	case 5:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("5questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << structs[i].quest << endl;
		}

		do {
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			structs[delete_num - 1].quest = " ";
			structs[delete_num - 1].var1 = " ";
			structs[delete_num - 1].var2 = " ";
			structs[delete_num - 1].var3 = " ";
			structs[delete_num - 1].var4 = " ";
			structs[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("5questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << structs[i].quest << endl;
			}
			UpdateQuestionsFile(structs, "5questionsCyphered", delete_num * (-1));
			DownloadingQuestions(structs, "5questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;

	case 6:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("6questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << files[i].quest << endl;
		}

		do {
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			files[delete_num - 1].quest = " ";
			files[delete_num - 1].var1 = " ";
			files[delete_num - 1].var2 = " ";
			files[delete_num - 1].var3 = " ";
			files[delete_num - 1].var4 = " ";
			files[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("6questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << files[i].quest << endl;
			}
			UpdateQuestionsFile(files, "6questionsCyphered", delete_num * (-1));
			DownloadingQuestions(files, "6questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;

	case 7:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("7questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << adress[i].quest << endl;
		}

		do {
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			adress[delete_num - 1].quest = " ";
			adress[delete_num - 1].var1 = " ";
			adress[delete_num - 1].var2 = " ";
			adress[delete_num - 1].var3 = " ";
			adress[delete_num - 1].var4 = " ";
			adress[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("7questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << adress[i].quest << endl;
			}
			UpdateQuestionsFile(adress, "7questionsCyphered", delete_num * (-1));
			DownloadingQuestions(adress, "7questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;

	case 8:
	{
		cout << "Список вопросов: " << endl << endl;
		for (int i = 0; i < GetQuestionsCount("8questionsCyphered"); i++)
		{
			cout << i + 1 << ". " << dynamic[i].quest << endl;
		}

		do {
			cout << endl << "Введите номер вопроса, который вы хотите удалить.";
			cout << endl << "Нажмите 0, чтобы выйти." << endl;
			cin >> delete_num;
			if (delete_num == 0) return;
			delete_count++;
			dynamic[delete_num - 1].quest = " ";
			dynamic[delete_num - 1].var1 = " ";
			dynamic[delete_num - 1].var2 = " ";
			dynamic[delete_num - 1].var3 = " ";
			dynamic[delete_num - 1].var4 = " ";
			dynamic[delete_num - 1].answer = " ";

			system("cls");

			cout << "Редактированный список вопросов: " << endl << endl;

			for (int i = 0; i < GetQuestionsCount("8questionsCyphered") - delete_count; i++)
			{
				cout << i + 1 << ". " << dynamic[i].quest << endl;
			}
			UpdateQuestionsFile(dynamic, "8questionsCyphered", delete_num * (-1));
			DownloadingQuestions(dynamic, "8questionsCyphered.txt");
		} while (delete_num != 0);
	}; break;
	}
}

void QuestionAdd(int theme_num, question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	string quest, var1, var2, var3, var4, answer, bufer;
	_flushall();
	getline(cin, bufer);
	switch (theme_num)
	{
		case 1:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin,quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin,var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);

			cycles[GetQuestionsCount("1questionsCyphered")].quest = quest;
			cycles[GetQuestionsCount("1questionsCyphered")].var1 = "1) " + var1;
			cycles[GetQuestionsCount("1questionsCyphered")].var2 = "2) " + var2;
			cycles[GetQuestionsCount("1questionsCyphered")].var3 = "3) " + var3;
			cycles[GetQuestionsCount("1questionsCyphered")].var4 = "4) " + var4;
			cycles[GetQuestionsCount("1questionsCyphered")].answer = answer;
			UpdateQuestionsFile(cycles, "1questionsCyphered",1);
			DownloadingQuestions(cycles, "1questionsCyphered.txt");
		}; break;

		case 2:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin, quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin, var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);

			mass[GetQuestionsCount("2questionsCyphered")].quest = quest;
			mass[GetQuestionsCount("2questionsCyphered")].var1 = "1) " + var1;
			mass[GetQuestionsCount("2questionsCyphered")].var2 = "2) " + var2; 
			mass[GetQuestionsCount("2questionsCyphered")].var3 = "3) " + var3; 
			mass[GetQuestionsCount("2questionsCyphered")].var4 = "4) " + var4; 
			mass[GetQuestionsCount("2questionsCyphered")].answer = answer;
			UpdateQuestionsFile(mass, "2questionsCyphered", 1);
			DownloadingQuestions(mass, "2questionsCyphered.txt");
		}; break;

		case 3:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin, quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin, var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);
			stroki[GetQuestionsCount("3questionsCyphered")].quest = quest;
			stroki[GetQuestionsCount("3questionsCyphered")].var1 = "1) " + var1;
			stroki[GetQuestionsCount("3questionsCyphered")].var2 = "2) " + var2;
			stroki[GetQuestionsCount("3questionsCyphered")].var3 = "3) " + var3;
			stroki[GetQuestionsCount("3questionsCyphered")].var4 = "4) " + var4;
			stroki[GetQuestionsCount("3questionsCyphered")].answer = answer;
			UpdateQuestionsFile(stroki, "3questionsCyphered",1);
			DownloadingQuestions(stroki, "3questionsCyphered.txt");
		}; break;

		case 4:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin, quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin, var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);

			recurse[GetQuestionsCount("4questionsCyphered")].quest = quest;
			recurse[GetQuestionsCount("4questionsCyphered")].var1 = "1) " + var1;
			recurse[GetQuestionsCount("4questionsCyphered")].var2 = "2) " + var2;
			recurse[GetQuestionsCount("4questionsCyphered")].var3 = "3) " + var3;
			recurse[GetQuestionsCount("4questionsCyphered")].var4 = "4) " + var4;
			recurse[GetQuestionsCount("4questionsCyphered")].answer = answer;
			UpdateQuestionsFile(recurse, "4questionsCyphered",1);
			DownloadingQuestions(recurse, "4questionsCyphered.txt");
		}; break;

		case 5:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin, quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin, var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);

			structs[GetQuestionsCount("5questionsCyphered")].quest = quest;
			structs[GetQuestionsCount("5questionsCyphered")].var1 = "1) " + var1;
			structs[GetQuestionsCount("5questionsCyphered")].var2 = "2) " + var2;
			structs[GetQuestionsCount("5questionsCyphered")].var3 = "3) " + var3;
			structs[GetQuestionsCount("5questionsCyphered")].var4 = "4) " + var4;
			structs[GetQuestionsCount("5questionsCyphered")].answer = answer;
			UpdateQuestionsFile(structs, "5questionsCyphered",1);
			DownloadingQuestions(structs, "5questionsCyphered.txt");
		}; break;

		case 6:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin, quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin, var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);

			files[GetQuestionsCount("6questionsCyphered")].quest = quest;
			files[GetQuestionsCount("6questionsCyphered")].var1 = "1) " + var1;
			files[GetQuestionsCount("6questionsCyphered")].var2 = "2) " + var2;
			files[GetQuestionsCount("6questionsCyphered")].var3 = "3) " + var3;
			files[GetQuestionsCount("6questionsCyphered")].var4 = "4) " + var4;
			files[GetQuestionsCount("6questionsCyphered")].answer = answer;
			UpdateQuestionsFile(files, "6questionsCyphered",1);
			DownloadingQuestions(files, "6questionsCyphered.txt");
		}; break;

		case 7:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin, quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin, var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);
			adress[GetQuestionsCount("7questionsCyphered")].quest = quest;
			adress[GetQuestionsCount("7questionsCyphered")].var1 = "1) " + var1;
			adress[GetQuestionsCount("7questionsCyphered")].var2 = "2) " + var2;
			adress[GetQuestionsCount("7questionsCyphered")].var3 = "3) " + var3;
			adress[GetQuestionsCount("7questionsCyphered")].var4 = "4) " + var4;
			adress[GetQuestionsCount("7questionsCyphered")].answer = answer;
			UpdateQuestionsFile(adress, "7questionsCyphered",1);
			DownloadingQuestions(adress, "7questionsCyphered.txt");
		}; break;

		case 8:
		{
			cout << "Введите вопрос: " << endl;
			getline(cin, quest);
			cout << "Введите варианты ответа: " << endl;
			cout << "1. ";
			getline(cin, var1);
			cout << endl;
			cout << "2. ";
			getline(cin, var2);
			cout << endl;
			cout << "3. ";
			getline(cin, var3);
			cout << endl;
			cout << "4. ";
			getline(cin, var4);
			cout << endl;
			cout << "Введите номер правильного варианта ответа: ";
			getline(cin, answer);

			dynamic[GetQuestionsCount("8questionsCyphered")].quest = quest;
			dynamic[GetQuestionsCount("8questionsCyphered")].var1 = "1) " + var1;
			dynamic[GetQuestionsCount("8questionsCyphered")].var2 = "2) " + var2;
			dynamic[GetQuestionsCount("8questionsCyphered")].var3 = "3) " + var3;
			dynamic[GetQuestionsCount("8questionsCyphered")].var4 = "4) " + var4;
			dynamic[GetQuestionsCount("8questionsCyphered")].answer = answer;
			UpdateQuestionsFile(dynamic, "8questionsCyphered",1);
			DownloadingQuestions(dynamic, "8questionsCyphered.txt");
		}; break;
		default: return;
	}
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
		if (ch1 > 0 && ch1 < 9) 
		{
			theme_num = ch1;
		}
		else 
		{
			cout << "Неверный ввод" << endl;
			return;
		}
		system("cls");
		do {
			system("cls");
			cout << "Выберите действие: " << endl;
			cout << "1. Удалить вопрос" << endl;
			cout << "2. Добавить вопрос" << endl;
			cout << "Нажмите 0, чтобы выйти" << endl;
			cin >> ch2;
			switch (ch2)
			{
			case 1: {system("cls"); QuestionDelete(theme_num, cycles, mass, stroki, recurse, structs, files, adress, dynamic); }; break;
			case 2: {system("cls"); QuestionAdd(theme_num, cycles, mass, stroki, recurse, structs, files, adress, dynamic); }; break;
			case 0: return;
			}
		} while (ch2 != 0);
	} while (ch1 != 0);
	return;
	
}

void TeacherMenu(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[], user users[])
{
	setlocale(LC_ALL, "Rus");
	int c;
	do {
		system("cls");
		//cout << "Ошибка" << endl;
		cout << "1. Редактирование вопросов" << endl;
		cout << "2. Работа со списком студентов" << endl;
		cout << "Нажмите 0, чтобы выйти" << endl;
		cin >> c;
		switch (c)
		{
		case 1: QuestionWork(cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
		case 2: StudentListChange(users); break;
		case 0: break;
		}
	} while (c != 0);
	return;
}
