#include <iostream>
#include <fstream>
#include "Student.h"
#include "Teacher.h"
#include "FileModule.h"

#include <locale.h>
#include <stdlib.h>

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
	
	user users[100];
	setlocale(LC_ALL, "Rus");
	cout << "Система тестирования по курсу Программирование" << endl;
	if (Autorization(users)==1) 
	{
		TeacherMenu();
	}
	else 
	{
		StudentMenu();
	}
	system("pause");
}
