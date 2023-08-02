////#pragma once
////void Save()
////{
////	Quiz quiz;
////	string sual;
////	ofstream file(quiz.quiz_name + ".txt");
////	if (file)
////	{
////		file << "QuizName: " << quiz.quiz_name << endl;
////
////		file << "Sual: " << sual << "\n";
////		file << "A. " ;
////		getline(cin, quiz.answers.answer_a);
////
////		file << "B." << quiz.answers.answer_b << '\n';
////		file << "C." << quiz.answers.answer_c << '\n';
////		file << "D." << quiz.answers.answer_d << '\n' << '\n';
////		file << "Correct answer" << quiz.answers.correct_answer << '\n';
////
////		file.close();
////
////	}
////
////
////}
////
//////Qeyd: Save funksiyasini save yerinde istifade etmisem.
////
//
//
//
//
//#pragma once
//
//string quizName;
//void Save()
//{
//	ofstream file(quizName + ".txt",ios::out);
//	if (file)
//	{
//		file << "Quiz Name: " << quizName << '\n';
//		
//	}
//	else
//	{
//		cout << "Error";
//	}
//}