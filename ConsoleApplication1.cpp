#include <iostream>
#include <fstream>
#include <locale>
#include "Student.h"
#include "Teacher.h"
#include "FileModule.h"
#include <string>
#include <locale.h>
#include <stdlib.h>

int main()
{
	user users[100];
	question quests[100];
	DownloadingQuestions(quests);
	int answ;
	setlocale(LC_ALL, "Rus");
	cout << "Система тестирования по курсу Программирование" << endl;
	shifr("questions");
	if (Autorization(users)==1) 
	{
		TeacherMenu();
	}
	else 
	{
		cout << quests[5].quest << endl << quests[5].var1 << endl << quests[5].var2 << endl << quests[5].var3 << endl << quests[5].var4 << endl;
		cin >> answ;
		if (answ == stoi(quests[5].answer))
		{
			cout << "Верно уебан!" << endl;
		}
		else
		{
			cout << "неВерно уебан!" << endl;
		}
		StudentMenu();
		
	}
	system("pause");
}
