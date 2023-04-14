#pragma once
#include <string>
using namespace std;

struct user {
	string Login, Password, Name, Surname, type;
};
struct question {
	int quest_num;
	string quest, var1, var2, var3, var4;
	string answer;
};
void shifr(string filename);
void deshifr();
void DownloadingQuestions(question quests[]);
int Autorization(user users[]);
