
#pragma once
//int max_questions;
void Submit(Person& person, Quiz& quiz, int present_question)
{
	int correct = 0;
	int incorrect = 0;
	for (size_t i = 0; i < present_question -1; i++)
	{
		string correctAnswer = Corrects_Answers(quiz, i + 1);
		string response;
		cout << "Question " << i + 1 << "enter the answers: ";
		cin >> response;

		if (response == correctAnswer)
		{
			correct++;

		}
		else incorrect++;
	}

	int pass = max_questions - present_question + 1 - correct - incorrect;

	person.sual = max_questions;
	person.correctCount += correct;
	person.incorrectCount += incorrect;
	person.passCount += pass;

	cout << "Correct: " << person.correctCount << endl;
	cout << "InCorrect: " << person.incorrectCount << endl;
	cout << "Pass: " << person.passCount << endl;
}