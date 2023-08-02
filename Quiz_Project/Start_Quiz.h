#pragma once

	void start_quiz()
	{
		Person person;
		cout << "Enter the name :";
		cin.ignore();
		getline(cin, person._name);

		cout << "Secim et:\n";
		for (size_t i = 0; i < quizzes.size(); i++)
		{
			cout << i + 1 << ". " << quizzes[i].quiz_name << '\n';
		}

		int secim = 1;
		int present_question;
		int choice=0;
		cin >> choice;

		size_t quiz_index = choice - '1';
		if (quiz_index >= 0 && quiz_index < quizzes.size())
		{
			Quiz& quiz = quizzes[quiz_index];
			person._quizName = quiz.quiz_name;
			ifstream file(quiz.quiz_name + ".txt");

			string sunnu;
			while (getline(file, sunnu))
			{
				cout << sunnu << '\n';
			}

			while (true)
			{
				if (choice == 1)
				{
					setcolor(12);
					cout << "Previus" << endl;
					setcolor(15);
				}
				else cout << "Previus" << endl;

				if (choice == 2)
				{
					setcolor(12);
					cout << "Next" << endl;
					setcolor(15);
				}
				else cout << "Next" << endl;

				if (choice == 3)
				{
					setcolor(12);
					cout << "Submit" << endl;
					setcolor(15);
				}
				else cout << "Submit" << endl;

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

				if (choice != 0)
				{
					switch (secim)
					{
					case 1:
						system("cls");
						Previuss(quiz,present_question);
						break;
					case 2:
						system("cls");
						Next(quiz, present_question);
						break;
					case 3 :
						system("cls");
						Submit(person, quiz, present_question);
						//bunu qurtar
						break;

					default:
						break;
					}
					secim = 0;
					choice = 1;
					_getch();
				}
				system("cls");
			}
		}
	}