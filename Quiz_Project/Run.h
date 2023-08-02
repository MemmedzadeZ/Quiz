#pragma once
int choice = 1;
int secim = 0;

void Run()
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
		cout << "\t\t\t\t|       Admin Quiz       |" << endl;
		cout << "\t\t\t\t-------------------------" << endl;

		if (choice == 1)
		{
			setcolor(9);
			cout << "\t\t\t\t\tCreat Quiz" << endl;
			setcolor(15);
		}
		else cout << "\t\t\t\t\tCreat Quiz" << endl;

		if (choice == 2)
		{
			setcolor(9);
			cout << "\t\t\t\t\tStart Quiz" << endl;
			setcolor(15);
		}

		else cout << "\t\t\t\t\tStart Quiz" << endl;

		if (choice == 3)
		{
			setcolor(9);
			cout << "\t\t\t\t\tLeaderboard" << endl;
			setcolor(15);
		}

		else cout << "\t\t\t\t\tLeaderboard" << endl;

		if (choice == 4)
		{
			setcolor(9);
			cout << "\t\t\t\t\tExit" << endl;
			setcolor(15);
		}
		else cout << "\t\t\t\t\tExit" << endl;


		int temp = _getch();

		if (temp == 72)
		{
			choice = choice == 1 ? 4 : choice - 1;
		}
		else if (temp == 80)
		{
			choice = choice == 4 ? 1 : choice + 1;
		}
		else if (temp == 13)
		{
			secim = choice;

		}

		if (secim != 0)
		{
			switch (secim)
			{
			case 1:
				system("cls");
				Create_Quiz();
				break;
			case 2:
				system("cls");
				start_quiz();
				break;
			case 3:
				system("cls");
				Leader_board();
				break;
			case 4:
				system("cls");
				//exit(0);
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