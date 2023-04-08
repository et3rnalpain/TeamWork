#include <iostream>
#include "Student.h"
#include "FileModule.h"
#include "Teacher.h"

using namespace std;

struct question
{
	string quest, var1, var2, var3, var4;
};

struct user {
	string Login, Password, Name, Surname, type;
};

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Система тестирования по курсу Программирование" << endl;

}
