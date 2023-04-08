#pragma once
#include "FileModule.h"
#include <fstream>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct user {
	string Login, Password, Name, Surname, type;
};

struct question
{
	int quest_num;
	string quest, var1, var2, var3, var4;
	string answer;
};

int Autorization(user users[])
{
	fstream fin;
	string log, pas;
	fin.open("Logs.txt");
	for (int i = 0; i < 100; i++)
	{
		fin >> users[i].Login;
		fin >> users[i].Password;
		fin >> users[i].type;
	}
	
	while (true)
	{
		cout << "¬ведите логин: " << endl;
		cin >> log;
		cout << "¬ведите пароль: " << endl;
		cin >> pas;
		for (int i = 0; i < 100; i++)
		{
			if (log == users[i].Login && pas == users[i].Password)
			{
				if (users[i].type == "teacher") return 1;
				if (users[i].type == "student") return 0;
			}
		}
	}
	fin.close();


}
void DownloadingQuestions(question quests[])
{
	//SetConsoleCP(1251);
	string line;
	int i = 0;
	ifstream fin;
	fin.open("questions.txt");
	while(!fin.eof())
	{
		getline(fin, line); quests[i].quest = line; cout << quests[i].quest << endl;
		getline(fin, line); quests[i].var1 = line; cout << quests[i].var1 << endl;
		getline(fin, line); quests[i].var2 = line; cout << quests[i].var2 << endl;
		getline(fin, line); quests[i].var3 = line; cout << quests[i].var3 << endl;
		getline(fin, line); quests[i].var4 = line; cout << quests[i].var4 << endl;
		getline(fin, line); quests[i].answer = line; cout << quests[i].answer << endl;
		i++;
	}
	fin.close();

}
