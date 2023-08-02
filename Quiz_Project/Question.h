#pragma once
class Question
{
public:
	string _questionText;
	vector<Answer> _answers;
	int  _correctAnswer;


	//Question(string questionText) :_questionText(questionText) {}
	void addAnswer(Answer answer) { _answers.push_back(answer); }
	vector<Answer>& GetAnswers() { return _answers; }
	void SetCorrectAnswer(int correctAnswer)
	{
		if (correctAnswer > 0)
		{
			_questionText = correctAnswer;
		}
		throw("Correct Answer can be zero");
	}
	void SetQuestionText(string questionText)
	{
		if (questionText.length() > 0)
		{
			_questionText = questionText;
		}
		throw("question text can be zero");
	}
	int GetCorrectAnswer() { return _correctAnswer; }
	string GetQuestionText() { return _questionText; }





};