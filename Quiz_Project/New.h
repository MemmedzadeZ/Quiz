#pragma once

string sual;
Quiz quiz;
void New()
{
	
	
	cout << "Sual daxil edin";
	cin.ignore();
	getline(cin, sual);

	cout << "a.";
	getline(cin, quiz.answers.answer_a);

	cout << "b.";
	getline(cin, quiz.answers.answer_b);

	cout << "c.";
	getline(cin, quiz.answers.answer_c);

	cout << "d.";
	getline(cin, quiz.answers.answer_d);

	cout << "Correct answer->";
	getline(cin, quiz.answers.correct_answer);


}


void Save()
{
	//Quiz quiz;

	ofstream file(quiz.quiz_name + ".txt", ios::out);
	if (!file)
	{
		throw exception("File a yuklenir");
	}
	if (!file.is_open())
	{ 
		throw exception("File yuklenmedi");
	}

	file << "Sual: " << sual << endl;
	file << "a." << quiz.answers.answer_a << endl;
	file << "b." << quiz.answers.answer_b << endl;
	file << "c." << quiz.answers.answer_c << endl;
	file << "d." << quiz.answers.answer_d << endl;
	file << "Correct answers->" << quiz.answers.correct_answer << endl;
}