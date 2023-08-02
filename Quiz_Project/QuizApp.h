#pragma once
#include "New.h"
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

void setcolor(int colorCode)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, colorCode);
}
class QuizApp
{
public:
	
	vector <Person> leaderboard;
};



