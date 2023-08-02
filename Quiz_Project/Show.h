#pragma once

void Show(Quiz& quiz, int present_question)
{
	ifstream file(quiz.quiz_name + ".txt");
	string line;
	int count = 0;
	while (getline(file, line))
	{
		if (line.find("Sual:") != string::npos)
		{
			count++;
		}
		if (count == present_question)
		{
			cout << line << endl;

		}
	}
	file.close();
}