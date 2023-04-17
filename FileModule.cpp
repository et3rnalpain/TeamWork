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

void UpdateUsersLogs(user users[])
{
	fstream f;
	f.open("LogsCyphered.txt");
	int count = GetUsersCount("LogsCyphered");
	for (int i = 0; i < count; i++)
	{
		if (users[i].Login != "" || users[i].Login != " " || users[i].Password != " " || users[i].Name != " " || users[i].Surname != " ")
		{
			f << shifrtext(users[i].Login) << " " << shifrtext(users[i].Password) << " " << shifrtext(users[i].Name) << " " << shifrtext(users[i].Surname) << " " << shifrtext(users[i].type) << " "
				<< shifrtext(to_string(users[i].o1)) << " " << shifrtext(to_string(users[i].o2)) << " " << shifrtext(to_string(users[i].o3)) << " " << shifrtext(to_string(users[i].o4)) << " " << shifrtext(to_string(users[i].o5)) << " "
				<< shifrtext(to_string(users[i].o6)) << " " << shifrtext(to_string(users[i].o7)) << " " << shifrtext(to_string(users[i].o8)) << " " << shifrtext(to_string(users[i].oi)) << " " << shifrtext(to_string(users[i].os)) << endl;

		}
	}
}

int GetQuestionsCount(string filename)
{
	int x = 0;
	string v = "";
	fstream fin;
	fin.open(filename + ".txt");
	while (!fin.eof()) { getline(fin, v); x++;}
	return x / 6;
}

int GetUsersCount(string filename) 
{
	int x = 0;
	string v = "";
	fstream fin;
	fin.open(filename + ".txt");
	while (!fin.eof()) { getline(fin, v); x++; }
	return x;
}

int Autorization(user users[])
{
	fstream fin;
	string log, pas, line;

	fin.open("LogsCyphered.txt");
	for (int i = 0; i < GetUsersCount("LogsCyphered"); i++)
	{

		fin >> line; users[i].Login = deshifrtext(line); 
		fin >> line; users[i].Password = deshifrtext(line); 
		fin >> line; users[i].Name = deshifrtext(line); 
		fin >> line; users[i].Surname = deshifrtext(line); 
		fin >> line; users[i].type = deshifrtext(line); 
		fin >> line;  users[i].o1 = stoi(line) - 1; 
		fin >> line;  users[i].o2 = stoi(line) - 1; 
		fin >> line;  users[i].o3 = stoi(line) - 1; 
		fin >> line;  users[i].o4 = stoi(line) - 1; 
		fin >> line;  users[i].o5 = stoi(line) - 1; 
		fin >> line;  users[i].o6 = stoi(line) - 1; 
		fin >> line;  users[i].o7 = stoi(line) - 1; 
		fin >> line;  users[i].o8 = stoi(line) - 1; 
		fin >> line;  users[i].oi = stoi(line) - 1; 
		fin >> line;  users[i].os = stoi(line) - 1; 

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
void DownloadingQuestions(question quests[], string filename)
{
	SetConsoleCP(1251);
	string line;
	int i = 0;
	ifstream fin;
	fin.open(filename);
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			getline(fin, line); quests[i].quest = deshifrtext(line);
			getline(fin, line); quests[i].var1 = deshifrtext(line);
			getline(fin, line); quests[i].var2 = deshifrtext(line);
			getline(fin, line); quests[i].var3 = deshifrtext(line);
			getline(fin, line); quests[i].var4 = deshifrtext(line);
			getline(fin, line); quests[i].answer = deshifrtext(line);
			i++;
		}
	fin.close();
	}

}
void shifrtextfile(string filename)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	ifstream f1;
	ofstream f2;
	char a;
	Bukva bukva;
	f1.open(filename+".txt");
	f2.open(filename+"Cyphered.txt");
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
string shifrtext(string text) 
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	Bukva bukva;
	string result = "";
	for (int j = 0; j < text.length(); j++) 
	{
		if (text[j] == ' ')
			result += text[j];
		//if (text[j] == '\n')
			//result += text[j];
		for (int i = 0; i < 34; i++)
		{
			if (text[j] == bukva.buk[i])
			{
				if (text[j] == '€')
					result += "а";
				else
					result += bukva.buk[i + 1];
			}
			if (text[j] == bukva.bukb[i])
			{
				if (text[j] == 'я')
					result += "ј";
				else
					result += bukva.buk[i + 1];
			}
		}
		for (int i1 = 0; i1 < 28; i1++)
		{
			if (text[j] == bukva.znak[i1])
			{
				if (text[j] == '?')
					result += '!';
				else
					result += bukva.znak[i1];
			}
		}
		for (int i2 = 0; i2 < 27; i2++)
		{
			if (text[j] == bukva.bukA[i2])
			{
				if (text[j] == 'z')
					result += 'a';
				else
					result += bukva.bukA[i2 + 1];
			}
			if (text[j] == bukva.bukAb[i2])
			{
				if (text[j] == 'Z')
					result += 'A';
				else
					result += bukva.bukAb[i2 + 1];
			}
		}
		for (int i3 = 0; i3 < 11; i3++)
		{
			if (text[j] == bukva.num[i3])
			{
				if (text[j] == '0')
					result += '1';
				else
					result += bukva.num[i3 + 1];
			}
		}
	}	
	return result;
}
void deshifrtextfile(string filename)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	ifstream f1;
	ofstream f2;
	char a;
	Bukva bukva;
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
string deshifrtext(string text) 
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	Bukva bukva;
	string result = "";
	for (int j = 0; j < text.length(); j++)
	{
		if (text[j] == ' ')
			result += text[j];
		if (text[j] == '\n')
			result += text[j];
		for (int i = 0; i < 34; i++)
		{
			if (text[j] == bukva.buk[i])
			{
				if (text[j] == 'а')
					result += '€';
				else
					result += bukva.buk[i - 1];
			}
			if (text[j] == bukva.bukb[i])
			{
				if (text[j] == 'ј')
					result += 'я';
				else
					result += bukva.bukb[i - 1];
			}
		}
		for (int i1 = 0; i1 < 28; i1++)
		{
			if (text[j] == bukva.znak[i1])
			{
				if (text[j] == '!')
					result += '?';
				else
					result += bukva.znak[i1];
			}
		}
		for (int i2 = 0; i2 < 27; i2++)
		{
			if (text[j] == bukva.bukA[i2])
			{
				if (text[j] == 'a')
					result += 'z';
				else
					result += bukva.bukA[i2 - 1];
			}
			if (text[j] == bukva.bukAb[i2])
			{
				if (text[j] == 'A')
					result += 'Z';
				else
					result += bukva.bukAb[i2 - 1];
			}
		}
		for (int i3 = 0; i3 < 11; i3++)
		{
			if (text[j] == bukva.num[i3])
			{
				if (text[j] == '1')
					result += '0';
				else
					result += bukva.num[i3 - 1];
			}
		}
	}
	return result;
}