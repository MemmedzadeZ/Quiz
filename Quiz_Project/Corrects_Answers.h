#pragma once

string Corrects_Answers(Quiz& quiz, int present_question)
{
	ifstream file(quiz.quiz_name + ".txt");
	string line;
	int count = 0;

	while (getline(file, line))
	{
		if (line.find("Sual: ") != string::npos)
		{
			count++;
		}

		if (count == present_question)
		{
			getline(file, line);
			if (line.find("Duz Cavab: ") != string::npos)
			{
				return line.substr(10);
			}
		}
	}
	file.close();
	return "";
}