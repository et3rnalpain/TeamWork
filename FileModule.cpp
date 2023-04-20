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

void UpdateUsersLogs(user users[], int d)
{
	fstream f;
	f.open("LogsCyphered.txt");
	int count = GetUsersCount("LogsCyphered");
	for (int z = 0; z < 100; z++) if (users[z].Login == "0" || users[z].Password == "0") {
		users[z].Login = ""; users[z].Password = ""; users[z].Name = ""; users[z].Surname = ""; users[z].type = ""; users[z].o1 = users[z].o2 = users[z].o3 = users[z].o4 = users[z].o5 = users[z].o6 = users[z].o7 = users[z].o8 = users[z].oi = users[z].os = "";
	}
	for (int i = 0; i < count-d; i++)
	{
		if (users[i].Login != " " && users[i].Login != "  " && users[i].Login != "")
		{
			f << shifrtext(users[i].Login) << " " << shifrtext(users[i].Password) << " " << shifrtext(users[i].Name) << " " << shifrtext(users[i].Surname) << " " << shifrtext(users[i].type) << " "
				<< shifrtext(users[i].o1) << " " << shifrtext(users[i].o2) << " " << shifrtext(users[i].o3) << " " << shifrtext(users[i].o4) << " " << shifrtext(users[i].o5) << " "
				<< shifrtext(users[i].o6) << " " << shifrtext(users[i].o7) << " " << shifrtext(users[i].o8) << " " << shifrtext(users[i].oi) << " " << shifrtext(users[i].os) << endl;
		}
	}
}

void UpdateQuestionsFile(question quests[], string filename, int d)
{
	fstream f;
	f.open(filename + ".txt");
	int count = GetQuestionsCount(filename);
	for (int i = 0; i < count+d; i++)
	{
		if (quests[i].quest != " ")
		{
			f << shifrtext(quests[i].quest) << endl << shifrtext(quests[i].var1) << endl << shifrtext(quests[i].var2) << endl << shifrtext(quests[i].var3) << endl << shifrtext(quests[i].var4) << endl << shifrtext(quests[i].answer) << endl;
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
		
		fin >> line; if (line != " " && line != to_string(NULL)) users[i].Login = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL)) users[i].Password = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL)) users[i].Name = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL)) users[i].Surname = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL)) users[i].type = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].o1 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL)) users[i].o2 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].o3 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].o4 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].o5 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].o6 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].o7 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].o8 = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].oi = deshifrtext(line);
		fin >> line; if (line != " " && line != to_string(NULL))  users[i].os = deshifrtext(line);

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
				if (users[i].type == "teacher") return 0;
				if (users[i].type == "student") return i;
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