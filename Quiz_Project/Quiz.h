#pragma once
class Quiz
{

public:
	string quiz_name;
	Answer answers;
	
	//vector<Question> questions;

	string getName() const { return this->quiz_name; }
	Answer getAnswers() const { return this->answers; }

	void SetName(string _name)
	{
		if (_name.length() > 0)
		{
			this->quiz_name = _name;

		}
		else throw invalid_argument("Quiz's name is empty");
	}
	
	
};