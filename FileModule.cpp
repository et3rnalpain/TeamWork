#pragma once
#include "FileModule.h"
#include <fstream>
#include <iostream>
using namespace std;

struct user {
	string Login, Password, Name, Surname, type;
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
	cout << "¬ведите логин: " << endl;
	cin >> log;
	cout << "¬ведите пароль: " << endl;
	cin >> pas;
	while (true)
	{
		for (int i = 0; i < 100; i++)
		{
			if (log == users[i].Login && pas == users[i].Password)
			{
				if (users[i].type == "teacher") return 1;
				if (users[i].type == "student") return 0;
			}
		}
	}
	
}