#pragma once


vector<Quiz> quizzes;
	vector<Question> questions;

void Create_Quiz()
{
	Quiz quiz;
	cout << "Enter the quiz name";
	cin.ignore();
	getline(cin, quiz.quiz_name);
	quizzes.push_back(quiz);

	int choice = 1;
	int secim = 0;

	while (true)
	{
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		setcolor(15);
		cout << "\t\t\t\t-------------------------" << endl;
		cout << "\t\t\t\t|       Create Quiz     |" << endl;
		cout << "\t\t\t\t-------------------------" << endl;

		if (choice == 1)
		{
			setcolor(9);
			cout << "\t\t\t\t\tNew" << endl;
			setcolor(15);
		}
		else cout << "\t\t\t\t\tNew" << endl;

		if (choice == 2)
		{
			setcolor(9);
			cout << "\t\t\t\t\tBack" << endl;
			setcolor(15);
		}

		else cout << "\t\t\t\t\tBack" << endl;

		if (choice == 3)
		{
			setcolor(9);
			cout << "\t\t\t\t\tSave" << endl;
			setcolor(15);
		}

		else cout << "\t\t\t\t\tSave" << endl;


		int temp = _getch();

		if (temp == 72)
		{
			choice = choice == 1 ? 3 : choice - 1;
		}
		else if (temp == 80)
		{
			choice = choice == 3 ? 1 : choice + 1;
		}
		else if (temp == 13)
		{
			secim = choice;

		}
		string sual;

		if (secim != 0)
		{
			if (secim == 1)
			{
				New();
			}
			else if (secim == 2)
				break;
			
			else if (secim == 3)
			{

				Save();
				//break;
			}
			else if (secim == 4)
			{
				system("cls");
				exit(0);
				break;
			}
			
			secim = 0;
			choice = 1;
			_getch();
		}
		system("cls");


	}

}
