#include "FileModule.h"
#include <fstream>
#include <iostream>
using namespace std;

int Autorization(user users[100])
{
	fstream fin;
	fin.open("Logs.txt");
	for (int i = 0; i < 100; i++)
	{
		fin >> users[i].Login;
		fin >> users[i].Password;
		fin >> users[i].type;
	}
}