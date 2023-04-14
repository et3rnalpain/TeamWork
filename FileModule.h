#pragma once
#include <string>
#include <windows.h>
using namespace std;

struct user {
	string Login, Password, Name, Surname, type;
	int o1, o2, o3, o4, o5, o6, o7, o8;
	int oi, os;
}; // Пользователь
struct question {
	int quest_num, numtema;
	string quest, var1, var2, var3, var4;
	string answer;
}; // Вопрос
int GetQuestionsCount(string filename);
int GetUsersCount(string filename);
void UpdateUsersLogs(user users[]);
void shifrtextfile(string filename);
string shifrtext(string text);
void deshifrtextfile(string filename);
string deshifrtext(string text);
void DownloadingQuestions(question quests[], string filename);
int Autorization(user users[]);
