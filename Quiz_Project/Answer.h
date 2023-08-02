#pragma once

class Answer
{
public:
	string _answerTest;
	bool isCheak;
	string answer_a;
	string answer_b;
	string answer_c;
	string answer_d;
	string correct_answer;	

	

	void SetAnswerTest(string answerTest)
	{
		if (answerTest.length() > 0)
		{
			_answerTest = answerTest;
		}
		throw("The answer cannot be zero");
	}

	string GetAnswerTest() const { return _answerTest; }



};
