#pragma once
class Person
{
public:
	string _name;
	string _quizName;
	int sual;
	int correctCount;
	int incorrectCount;
	int passCount ;

	
	/*int correctCount = 0;
	int incorrectCount = 0;
	int passCount = 0;*/


	void SetName(string name)
	{
		if (name.length() > 0)
		{
			_name = name;
		}
		throw("Ad duzgun daxil edin");

	}

	void SetQuizName(string quizName)
	{
		if (quizName.length() > 0)
		{
			_quizName = quizName;
		}
		throw("Quiz name is empty");
	}
};