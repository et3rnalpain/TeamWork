﻿#include <iostream>
#include <fstream>
#include "Student.h"
#include "Teacher.h"
#include "FileModule.h"

using namespace std;

struct question
{
	int quest_num;
	string quest, var1, var2, var3, var4;
};

struct user {
	string Login, Password, Name, Surname, type;
};

int main()
{

	TeacherMenu();

	user users[100];
	setlocale(LC_ALL, "rus");
	cout << "Система тестирования по курсу Программирование" << endl;
	Autorization();
}
