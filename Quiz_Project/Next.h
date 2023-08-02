#pragma once

int max_questions;
void Next(Quiz& quiz, int& present_question)
{
	if (present_question < max_questions)
	{
		present_question++;
		Show(quiz, present_question);

	}
}
