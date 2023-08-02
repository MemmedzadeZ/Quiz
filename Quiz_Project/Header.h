#pragma once


void Menuu()
{

	//Run();
	string username;
	string password;

	int choice = 0;
	int secim = 1;

	while (true)
	{
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;

		cout <<
			R"(   ________        .__        
   \_____  \  __ __|__|_______
    /  / \  \|  |  \  \___   /
   /   \_/.  \  |  /  |/    / 
   \_____\ \_/____/|__/_____ \
          \__>              \/
                           )" << endl;



		//cout << endl;
		//cout << endl;
		cout << endl;
		cout << endl;

		if (secim == 1)
		{
			setcolor(9);
			cout << "\t\tAdmin" << endl;
			setcolor(15);
		}
		else cout << "\t\tAdmin" << endl;

		if (secim == 2)
		{
			setcolor(9);
			cout << "\t\tUser" << endl;
			setcolor(15);
		}
		else cout << "\t\tUser" << endl;




		int temp = _getch();

		if (temp == 72)
		{
			secim = secim == 1 ? 2 : secim - 1;

		}
		else if (temp == 80)
		{
			secim = secim == 2 ? 1 : secim + 1;
		}
		else if (temp == 13)
		{
			choice = secim;
		}
		string _username;
		string _password;
		_username = "MZehra";
		_password = "zehra4321";


		if (choice != 0)
		{
			switch (choice)
			{
			case 1:
				system("cls");
				cout << "Enter the username:";
				cin >> username;
				cout << "Enter the password:";
				cin >> password;
				system("cls");
				if (_username == username)
				{
					Run();
				}
				if (_password == password)
				{
					Run();
				}
				throw("Erorrr");

				break;
			case 2:
				system("cls");
				Run_1();
				break;



			default:
				break;
			}
			choice = 0;
			secim = 1;
			_getch();

		}
		system("cls");


	}


}