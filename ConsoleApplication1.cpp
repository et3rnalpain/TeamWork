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
	int userid;
	question questsCycle[50];
	question questsMassive[50];
	question questsStroki[50];
	question questsRecursia[50];
	question questsStructure[50];
	question questsFiles[50];
	question questsAdress[50];
	question questsDynamicMemory[50];
	user users[100];
	setlocale(LC_ALL, "Rus");
	cout << "Система тестирования по курсу Программирование" << endl;
	DownloadingQuestions(questsCycle,"1questionsCyphered.txt");
	DownloadingQuestions(questsMassive, "2questionsCyphered.txt");
	DownloadingQuestions(questsStroki, "3questionsCyphered.txt");
	DownloadingQuestions(questsRecursia, "4questionsCyphered.txt");
	DownloadingQuestions(questsStructure, "5questionsCyphered.txt");
	DownloadingQuestions(questsFiles, "6questionsCyphered.txt");
	DownloadingQuestions(questsAdress, "7questionsCyphered.txt");
	DownloadingQuestions(questsDynamicMemory, "8questionsCyphered.txt");
	userid = Autorization(users);
	if (userid == 1)
	{
		TeacherMenu(questsCycle, questsMassive, questsStroki, questsRecursia, questsStructure, questsFiles, questsAdress, questsDynamicMemory,users);
	}
	else 
	{
		StudentMenu(questsCycle, questsMassive, questsStroki, questsRecursia, questsStructure, questsFiles, questsAdress, questsDynamicMemory);
	}
	
	system("pause");
}
