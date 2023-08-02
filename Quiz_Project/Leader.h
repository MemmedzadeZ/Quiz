#pragma once


void Leader_board()
{
	string quizName;
	ifstream file(quizName + ".txt");
	vector <Person> leaderboard;

	if (file)
	{
		string question;
		while (getline(file, question))
		{
			Person person;
			person._quizName = quizName;
			person.correctCount = person.incorrectCount = person.passCount = 0;

			for (int i = 0; i < 4; i++)
			{
				string answer;
				getline(file, answer);
			}
			char correctAnswer;
			file >> correctAnswer;
			file.ignore();

			person.correctCount = rand() % 11;
			person.incorrectCount = rand() % 6;
			person.passCount = rand() % 3;

			leaderboard.push_back(person);
		}
	}
	sort(leaderboard.begin(), leaderboard.end(), [](Person a, Person b)
		{return a.correctCount > b.correctCount; });

	cout << "~~~~~~~~TOP 10~~~~~~~~";
	for (size_t i = 0; i < leaderboard.size() && i <10; i++)
	{
		cout << leaderboard[i]._name << ", Correct: " << leaderboard[i].correctCount
			<< ", InCorrect: " << leaderboard[i].incorrectCount << ", Pass: " << leaderboard[i].passCount << endl;

	}



}