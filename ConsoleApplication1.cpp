#include <iostream>
#include <fstream>
#include "Student.h"
#include "Teacher.h"

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
	fstream fin;
	fin.open("Logs.txt");
	for (int i = 0; i < 100; i++) 
	{
		fin >> users[i].Login;
		fin >> users[i].Password;
		fin >> users[i].type;
	}



}
