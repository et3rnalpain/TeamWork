#pragma once
#include "FileModule.h"
#include <fstream>
#include <iostream>
#include <string.h>
#include <windows.h>
#include "mainstructinit.h"

using namespace std;


struct Bukva
{
	char num[11] = "1234567890";
	char buk[34] = "абвгдеЄжзийклмнопрстуфхцчшщъыьэю€";
	char bukb[34] = "јЅ¬√ƒ≈®∆«»… ЋћЌќѕ–—“”‘’÷„ЎўЏџ№Ёёя";
	char znak[28] = "!@#$%^&()_+-=/*,.;:']}[{<>?";
	char bukA[27] = "abcdefghijklmnopqrstuvwxyz";
	char bukAb[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
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
		getline(fin, line); quests[i].quest = line;
		getline(fin, line); quests[i].var1 = line;
		getline(fin, line); quests[i].var2 = line;
		getline(fin, line); quests[i].var3 = line;
		getline(fin, line); quests[i].var4 = line;
		getline(fin, line); quests[i].answer = line;
		i++;
	}
	fin.close();

}
void shifr(string filename)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	ifstream f1;
	ofstream f2;
	char a;
	Bukva bukva;
	int k = 0, count = 0;
	f1.open(filename+=".txt");
	f2.open("text2.txt");
	if (!f1.is_open() || !f2.is_open())
		cout << "ќшибка открыти€ файла!" << endl;
	else
	{
		while (f1.get(a))
		{
			if (a == ' ')
				f2 << a;
			if (a == '\n')
				f2 << a;
			for (int i = 0; i < 34; i++)
			{
				if (a == bukva.buk[i])
				{
					if (a == '€')
						f2 << 'а';
					else
						f2 << bukva.buk[i + 1];
				}
				if (a == bukva.bukb[i])
				{
					if (a == 'я')
						f2 << 'ј';
					else
						f2 << bukva.bukb[i + 1];
				}
			}
			for (int i1 = 0; i1 < 28; i1++)
			{
				if (a == bukva.znak[i1])
				{
					if (a == '?')
						f2 << '!';
					else
						f2 << bukva.znak[i1];
				}
			}
			for (int i2 = 0; i2 < 27; i2++)
			{
				if (a == bukva.bukA[i2])
				{
					if (a == 'z')
						f2 << 'a';
					else
						f2 << bukva.bukA[i2 + 1];
				}
				if (a == bukva.bukAb[i2])
				{
					if (a == 'Z')
						f2 << 'A';
					else
						f2 << bukva.bukAb[i2 + 1];
				}
			}
			for (int i3 = 0; i3 < 11; i3++)
			{
				if (a == bukva.num[i3])
				{
					if (a == '0')
						f2 << '1';
					else
						f2 << bukva.num[i3 + 1];
				}
			}
		}
		f1.close();
		f2.close();
	}
}
void deshifr()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	ifstream f1;
	ofstream f2;
	char a;
	Bukva bukva;
	int k = 0, count = 0;
	f1.open("text2.txt");
	f2.open("text.txt");
	if (!f1.is_open() || !f2.is_open())
		cout << "ќшибка открыти€ файла!" << endl;
	else
	{
		while (f1.get(a))
		{
			if (a == ' ')
				f2 << a;
			if (a == '\n')
				f2 << a;
			for (int i = 0; i < 34; i++)
			{
				if (a == bukva.buk[i])
				{
					if (a == 'а')
						f2 << '€';
					else
						f2 << bukva.buk[i - 1];
				}
				if (a == bukva.bukb[i])
				{
					if (a == 'ј')
						f2 << 'я';
					else
						f2 << bukva.bukb[i - 1];
				}
			}
			for (int i1 = 0; i1 < 28; i1++)
			{
				if (a == bukva.znak[i1])
				{
					if (a == '!')
						f2 << '?';
					else
						f2 << bukva.znak[i1];
				}
			}
			for (int i2 = 0; i2 < 27; i2++)
			{
				if (a == bukva.bukA[i2])
				{
					if (a == 'a')
						f2 << 'z';
					else
						f2 << bukva.bukA[i2 - 1];
				}
				if (a == bukva.bukAb[i2])
				{
					if (a == 'A')
						f2 << 'Z';
					else
						f2 << bukva.bukAb[i2 - 1];
				}
			}
			for (int i3 = 0; i3 < 11; i3++)
			{
				if (a == bukva.num[i3])
				{
					if (a == '1')
						f2 << '0';
					else
						f2 << bukva.num[i3 - 1];
				}
			}
		}
		f1.close();
		f2.close();
	}
}