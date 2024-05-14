#include <iostream>

using namespace std;

int main()
{
	int Screen[10][10]
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 1, 0, 0, 2, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	};

	int PlayerX = 0;
	int PlayerY = 0;
	char Key = 0;
	
	for (;;)
	{
		cin >> Key;

		if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'd')
		{
			PlayerX++;
		}
		system("cls");
		for (int Y = 0; Y < 10; Y++)
		{
			for (int X = 0; X < 10; X++)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Screen[Y][X] == 0)
				{
					cout << " ";
				}
				else if (Screen[Y][X] == 1)
				{
					cout << "*";
				}
				else if (Screen[X][Y] == 2)
				{
					cout << "G";
				}

			} cout << endl;
		}

	}

	return 0;
}