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
	DownloadingQuestions(questsCycle,"questionsCyphered1.txt");
	DownloadingQuestions(questsMassive, "questions2Cyphered.txt");
	DownloadingQuestions(questsStroki, "questions3Cyphered.txt");
	DownloadingQuestions(questsRecursia, "questions4Cyphered.txt");
	DownloadingQuestions(questsStructure, "questions5Cyphered.txt");
	DownloadingQuestions(questsFiles, "questions6Cyphered.txt");
	DownloadingQuestions(questsAdress, "questions7Cyphered.txt");
	DownloadingQuestions(questsDynamicMemory, "questions8Cyphered.txt");

	if (Autorization(users) == 1)
	{
		TeacherMenu(questsCycle, questsMassive, questsStroki, questsRecursia, questsStructure, questsFiles, questsAdress, questsDynamicMemory,users);
	}
	else 
	{
		StudentMenu(questsCycle, questsMassive, questsStroki, questsRecursia, questsStructure, questsFiles, questsAdress, questsDynamicMemory);
	}
	system("pause");
}
