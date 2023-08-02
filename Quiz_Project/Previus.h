#pragma once
void Previuss(Quiz& quiz,int &present_question)
{
	if (present_question > 1)
	{
		present_question--;
		Show(quiz, present_question);
	}


}