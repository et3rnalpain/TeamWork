#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <string>
#include <fstream>
#include <ctime>
#include <algorithm>
#include "FileModule.h"
using namespace std;

int SetMark(int wrong, int &mark)
{
	if (wrong < 2) mark = 5;
	if ((wrong < 4) && (wrong >= 2)) mark = 4;
	if ((wrong < 5) && (wrong >= 4)) mark = 3;
	if (wrong >= 5) mark = 2;
	return mark;
}
int SetMarkItog(int wrong, int& mark)
{
	if (wrong < 8) mark = 5;
	if ((wrong < 16) && (wrong >= 8)) mark = 4;
	if ((wrong < 20) && (wrong >= 16)) mark = 3;
	if (wrong >= 20) mark = 2;
	return mark;
}
void Rand(int* arr, char* name)
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % GetQuestionsCount(name);

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				--i;
				break;
			}
		}
	}
}
void Rand5(int* arr, const char* name)
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % GetQuestionsCount(name);

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				--i;
				break;
			}
		}
	}
}
void TrainingMode(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch1, answer;

	do
	{
		cout << endl << "Тренинг по теме" << endl << endl;
		cout << "1. Циклы" << endl;
		cout << "2. Массивы" << endl;
		cout << "3. Строки" << endl;
		cout << "4. Рекурсия" << endl;
		cout << "5. Структуры" << endl;
		cout << "6. Файлы" << endl;
		cout << "7. Адреса и указатели" << endl;
		cout << "8. Динамическая память" << endl;
		cout << "0. Выход" << endl;
		cout << "Введите номер темы:" << endl;
		cin >> ch1;
		srand(time(NULL));
		switch (ch1)
		{
		case 1:
		{
			int arr[10];
			char name[20] = "1questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << cycles[arr[i]].quest << endl << cycles[arr[i]].var1 << endl << cycles[arr[i]].var2 << endl << cycles[arr[i]].var3 << endl << cycles[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(cycles[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(cycles[arr[i]].answer));
			}
		} break;
		case 2:
		{
			int arr[10];
			char name[20] = "2questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << mass[arr[i]].quest << endl << mass[arr[i]].var1 << endl << mass[arr[i]].var2 << endl << mass[arr[i]].var3 << endl << mass[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(mass[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(mass[arr[i]].answer));
			}
		} break;
		case 3:
		{
			int arr[10];
			char name[20] = "3questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << stroki[arr[i]].quest << endl << stroki[arr[i]].var1 << endl << stroki[arr[i]].var2 << endl << stroki[arr[i]].var3 << endl << stroki[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(stroki[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(stroki[arr[i]].answer));
			}
		} break;
		case 4:
		{
			int arr[10];
			char name[20] = "4questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << recurse[arr[i]].quest << endl << recurse[arr[i]].var1 << endl << recurse[arr[i]].var2 << endl << recurse[arr[i]].var3 << endl << recurse[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(recurse[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(recurse[arr[i]].answer));
			}
		} break;
		case 5:
		{
			int arr[10];
			char name[20] = "5questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << structs[arr[i]].quest << endl << structs[arr[i]].var1 << endl << structs[arr[i]].var2 << endl << structs[arr[i]].var3 << endl << structs[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(structs[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(structs[arr[i]].answer));
			}
		} break;
		case 6:
		{
			int arr[10];
			char name[20] = "6questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << files[arr[i]].quest << endl << files[arr[i]].var1 << endl << files[arr[i]].var2 << endl << files[arr[i]].var3 << endl << files[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(files[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(files[arr[i]].answer));
			}
		} break;
		case 7:
		{
			int arr[10];
			char name[20] = "7questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << adress[arr[i]].quest << endl << adress[arr[i]].var1 << endl << adress[arr[i]].var2 << endl << adress[arr[i]].var3 << endl << adress[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(adress[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(adress[arr[i]].answer));
			}
		} break;
		case 8:
		{
			int arr[10];
			char name[20] = "8questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << dynamic[arr[i]].quest << endl << dynamic[arr[i]].var1 << endl << dynamic[arr[i]].var2 << endl << dynamic[arr[i]].var3 << endl << dynamic[arr[i]].var4 << endl;
				do
				{
					cin >> answer;
					if (answer != stoi(dynamic[arr[i]].answer)) cout << "Неверно, попробуй еще раз!" << endl;
				} while (answer != stoi(dynamic[arr[i]].answer));
			}
		} break;
		case 0: break;
		default: cout << endl << "Неверно введён пункт меню" << endl;
		}
	} while (ch1 != 0);
	return;
}

void TestingMode(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch1, answer;
	int wrong;
	int wrongs[10];
	int mark;
	do
	{
		cout << endl << "Тестирование по теме" << endl << endl;
		cout << "1. Циклы" << endl;
		cout << "2. Массивы" << endl;
		cout << "3. Строки" << endl;
		cout << "4. Рекурсия" << endl;
		cout << "5. Структуры" << endl;
		cout << "6. Файлы" << endl;
		cout << "7. Адреса и указатели" << endl;
		cout << "8. Динамическая память" << endl;
		cout << "0. Выход" << endl;
		cout << "Введите номер темы:" << endl;
		cin >> ch1;
		srand(time(NULL));
		switch (ch1)
		{
		case 1:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "1questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << cycles[arr[i]].quest << endl << cycles[arr[i]].var1 << endl << cycles[arr[i]].var2 << endl << cycles[arr[i]].var3 << endl << cycles[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(cycles[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << cycles[wrongs[i]].quest << endl << cycles[wrongs[i]].var1 << endl << cycles[wrongs[i]].var2 << endl << cycles[wrongs[i]].var3 << endl << cycles[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << cycles[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 2:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "2questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << mass[arr[i]].quest << endl << mass[arr[i]].var1 << endl << mass[arr[i]].var2 << endl << mass[arr[i]].var3 << endl << mass[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(mass[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << mass[wrongs[i]].quest << endl << mass[wrongs[i]].var1 << endl << mass[wrongs[i]].var2 << endl << mass[wrongs[i]].var3 << endl << mass[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << mass[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 3:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "3questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << stroki[arr[i]].quest << endl << stroki[arr[i]].var1 << endl << stroki[arr[i]].var2 << endl << stroki[arr[i]].var3 << endl << stroki[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(stroki[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << stroki[wrongs[i]].quest << endl << stroki[wrongs[i]].var1 << endl << stroki[wrongs[i]].var2 << endl << stroki[wrongs[i]].var3 << endl << stroki[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << stroki[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 4:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "4questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << recurse[arr[i]].quest << endl << recurse[arr[i]].var1 << endl << recurse[arr[i]].var2 << endl << recurse[arr[i]].var3 << endl << recurse[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(recurse[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << recurse[wrongs[i]].quest << endl << recurse[wrongs[i]].var1 << endl << recurse[wrongs[i]].var2 << endl << recurse[wrongs[i]].var3 << endl << recurse[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << recurse[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 5:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "5questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << structs[arr[i]].quest << endl << structs[arr[i]].var1 << endl << structs[arr[i]].var2 << endl << structs[arr[i]].var3 << endl << structs[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(structs[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << structs[wrongs[i]].quest << endl << structs[wrongs[i]].var1 << endl << structs[wrongs[i]].var2 << endl << structs[wrongs[i]].var3 << endl << structs[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << structs[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 6:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "6questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << files[arr[i]].quest << endl << files[arr[i]].var1 << endl << files[arr[i]].var2 << endl << files[arr[i]].var3 << endl << files[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(files[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << files[wrongs[i]].quest << endl << files[wrongs[i]].var1 << endl << files[wrongs[i]].var2 << endl << files[wrongs[i]].var3 << endl << files[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << files[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 7:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "7questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << adress[arr[i]].quest << endl << adress[arr[i]].var1 << endl << adress[arr[i]].var2 << endl << adress[arr[i]].var3 << endl << adress[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(adress[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << adress[wrongs[i]].quest << endl << adress[wrongs[i]].var1 << endl << adress[wrongs[i]].var2 << endl << adress[wrongs[i]].var3 << endl << adress[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << adress[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 8:
		{
			wrong = 0;
			int arr[10];
			char name[20] = "8questionsCyphered";
			Rand(arr, name);
			for (int i = 0; i < 10; i++)
			{
				cout << dynamic[arr[i]].quest << endl << dynamic[arr[i]].var1 << endl << dynamic[arr[i]].var2 << endl << dynamic[arr[i]].var3 << endl << dynamic[arr[i]].var4 << endl;
				cin >> answer;
				if (answer != stoi(dynamic[arr[i]].answer))
				{
					wrongs[wrong] = arr[i];
					wrong++;
				}
			}
			cout << endl << "Вопросы, на которые был дан неверный ответ:" << endl;
			for (int i = 0; i < wrong; i++)
			{
				cout << endl << dynamic[wrongs[i]].quest << endl << dynamic[wrongs[i]].var1 << endl << dynamic[wrongs[i]].var2 << endl << dynamic[wrongs[i]].var3 << endl << dynamic[wrongs[i]].var4 << endl;
				cout << "Верный ответ: " << dynamic[wrongs[i]].answer << endl;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMark(wrong, mark);
			cout << endl << "Оценка: " << mark << endl;
		} break;
		case 0: break;
		default: cout << endl << "Неверно введён пункт меню" << endl;
		}
	} while (ch1 != 0);
	return;
}

void ExaminationMode(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch;
	int wrong = 0;
	int mark;
	int arr1[5], arr2[5], arr3[5], arr4[5], arr5[5], arr6[5], arr7[5], arr8[5];
	Rand5(arr1, "1questionsCyphered"); Rand5(arr2, "2questionsCyphered"); Rand5(arr3, "3questionsCyphered");
	Rand5(arr4, "4questionsCyphered"); Rand5(arr5, "5questionsCyphered"); Rand5(arr6, "6questionsCyphered");
	Rand5(arr7, "7questionsCyphered"); Rand5(arr8, "8questionsCyphered");
	int answer;
	do
	{
		cout << endl << "Итоговый тест" << endl;
		cout << "1. Начать" << endl;
		cout << "0. Выход" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			for (int i = 0; i < 5; i++)
			{
				cout << cycles[arr1[i]].quest << endl << cycles[arr1[i]].var1 << endl << cycles[arr1[i]].var2 << endl << cycles[arr1[i]].var3 << endl << cycles[arr1[i]].var4 << endl;
				cin >> answer; if (answer != stoi(cycles[arr1[i]].answer)) wrong++;
				cout << mass[arr2[i]].quest << endl << mass[arr2[i]].var1 << endl << mass[arr2[i]].var2 << endl << mass[arr2[i]].var3 << endl << mass[arr2[i]].var4 << endl;
				cin >> answer; if (answer != stoi(mass[arr2[i]].answer)) wrong++;
				cout << stroki[arr3[i]].quest << endl << stroki[arr3[i]].var1 << endl << stroki[arr3[i]].var2 << endl << stroki[arr3[i]].var3 << endl << stroki[arr3[i]].var4 << endl;
				cin >> answer; if (answer != stoi(stroki[arr3[i]].answer)) wrong++;
				cout << recurse[arr4[i]].quest << endl << recurse[arr4[i]].var1 << endl << recurse[arr4[i]].var2 << endl << recurse[arr4[i]].var3 << endl << recurse[arr4[i]].var4 << endl;
				cin >> answer; if (answer != stoi(recurse[arr4[i]].answer)) wrong++;
				cout << structs[arr5[i]].quest << endl << structs[arr5[i]].var1 << endl << structs[arr5[i]].var2 << endl << structs[arr5[i]].var3 << endl << structs[arr5[i]].var4 << endl;
				cin >> answer; if (answer != stoi(structs[arr5[i]].answer)) wrong++;
				cout << files[arr6[i]].quest << endl << files[arr6[i]].var1 << endl << files[arr6[i]].var2 << endl << files[arr6[i]].var3 << endl << files[arr6[i]].var4 << endl;
				cin >> answer; if (answer != stoi(files[arr6[i]].answer)) wrong++;
				cout << adress[arr7[i]].quest << endl << adress[arr7[i]].var1 << endl << adress[arr7[i]].var2 << endl << adress[arr7[i]].var3 << endl << adress[arr7[i]].var4 << endl;
				cin >> answer; if (answer != stoi(adress[arr7[i]].answer)) wrong++;
				cout << dynamic[arr8[i]].quest << endl << dynamic[arr8[i]].var1 << endl << dynamic[arr8[i]].var2 << endl << dynamic[arr8[i]].var3 << endl << dynamic[arr8[i]].var4 << endl;
				cin >> answer; if (answer != stoi(dynamic[arr8[i]].answer)) wrong++;
			}
			cout << endl << "Кол-во ошибок: " << wrong << endl;
			SetMarkItog(wrong, mark);
			cout << endl << "Ваша оценка: " << mark << endl;
		}break;
		case 0: break;
		default: cout << "Неправильный выбор пункта меню" << endl; break;
		}
	} while (ch != 0);
	return;
}

void StudentMenu(question cycles[], question mass[], question stroki[], question recurse[], question structs[], question files[], question adress[], question dynamic[])
{
	int ch;
	cout << "Меню" << endl;
	cout << "1. Тренинг по теме" << endl;
	cout << "2. Тестирование по теме" << endl;
	cout << "3. Итоговый тест" << endl;
	cout << "Введите пункт меню: "; cin >> ch;
	switch (ch)
	{
	case 1: TrainingMode(cycles, mass, stroki, recurse, structs,files,adress,dynamic); break;
	case 2: TestingMode(cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
	case 3: ExaminationMode(cycles, mass, stroki, recurse, structs, files, adress, dynamic); break;
	default: cout << "Неверный пункт меню";
	}
}
