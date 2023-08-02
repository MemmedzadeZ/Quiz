#pragma once
int _choice = 1;
int secim_ = 0;

void Run_1()
{


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
		cout << "\t\t\t\t|       User  Quiz       |" << endl;
		cout << "\t\t\t\t-------------------------" << endl;

		

		if (_choice == 1)
		{
			setcolor(9);
			cout << "\t\t\t\t\tStart Quiz" << endl;
			setcolor(15);
		}

		else cout << "\t\t\t\t\tStart Quiz" << endl;

		if (_choice == 2)
		{
			setcolor(9);
			cout << "\t\t\t\t\tLeaderboard" << endl;
			setcolor(15);
		}

		else cout << "\t\t\t\t\tLeaderboard" << endl;

		if (_choice == 3)
		{
			setcolor(9);
			cout << "\t\t\t\t\tExit" << endl;
			setcolor(15);
		}
		else cout << "\t\t\t\t\tExit" << endl;


		int temp = _getch();

		if (temp == 72)
		{
			_choice = _choice == 1 ? 3 : _choice - 1;
		}
		else if (temp == 80)
		{
			_choice = _choice == 3 ? 1 : _choice + 1;
		}
		else if (temp == 13)
		{
			secim_ = _choice;

		}

		if (secim_ != 0)
		{
			switch (secim_)
			{
			
			case 1:
				system("cls");
				start_quiz();
				break;
			case 2:
				system("cls");
				Leader_board();
				break;
			case 3:
				system("cls");
				exit(0);
				break;
			default:
				break;
			}
			secim_ = 0;
			_choice = 1;
			_getch();
		}
		system("cls");


	}
}