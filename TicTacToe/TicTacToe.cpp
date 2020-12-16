#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{

	int box_x;
	int box_o;
	int error1 = 0;
	int error2 = 0;
	int turn = 1;
	char place[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	do
	{
		int y = 0;
		cout << "\tTIC TAC TOE\nPlayer 1 (x) - Player 2 (o)\n\n";
		for (int i = 0; i < 5; i++) // makes the table including the numbers
		{
			cout << "\t"<< " ";
			if (i % 2 == 0)
			{
				for (int x = 0; x < 5; x++)
				{
					if (x % 2 == 0)
					{
						cout << place[y];
						y++;
					}
					else
						cout << " | ";
				}
			}
			else
				cout << "---------";
			cout << "\n";
		}
		cout << "\n";
		if (turn % 2 == 1) // says which player's turn it is
		{
			do
			{
				turn++;
				cout << " Player x enter box number: ";
				cin >> box_x;
				error1++;
			} while (box_x > 9 || box_x < 1 || place[box_x - 1] == 'o' || place[box_x - 1] == 'x');
			system("CLS");
			for (int z = 1; z < 11; z++)
			{
				if (box_x == z && place[z - 1] != 'o' && place[z - 1] != 'x')
				{
					place[z - 1] = 'x';
					break;
				}

			}
		}
		else
		{
			do
			{
				turn++;
				cout << " Player o enter box number: ";
				cin >> box_o;
				
			} while (box_o > 9 || box_o < 1 || place[box_o - 1] == 'o' || place[box_o - 1] == 'x');
			system("CLS");
			for (int a = 1; a < 11; a++)
			{
				if (box_o == a && place[a - 1] != 'o' && place[a - 1] != 'x')
				{
					place[a - 1] = 'o';
					break;
				}
			}
		}
	} while (((place[0] != 'x' || place[1] != 'x' || place[2] != 'x') && (place[3] != 'x' || place[4] != 'x' || place[5] != 'x') && (place[6] != 'x' || place[7] != 'x' || place[8] != 'x') && (place[0] != 'x' || place[4] != 'x' || place[8] != 'x') &&
		(place[2] != 'x' || place[4] != 'x' || place[6] != 'x') && (place[0] != 'x' || place[3] != 'x' || place[6] != 'x') && (place[1] != 'x' || place[4] != 'x' || place[7] != 'x') && (place[2] != 'x' || place[5] != 'x' || place[8] != 'x')) && 
		((place[0] != 'o' || place[1] != 'o' || place[2] != 'o') && (place[3] != 'o' || place[4] != 'o' || place[5] != 'o') && (place[6] != 'o' || place[7] != 'o' || place[8] != 'o') && (place[0] != 'o' || place[4] != 'o' || place[8] != 'o') &&
		(place[2] != 'o' || place[4] != 'o' || place[6] != 'o') && (place[0] != 'o' || place[3] != 'o' || place[6] != 'o') && (place[1] != 'o' || place[4] != 'o' || place[7] != 'o') && (place[2] != 'o' || place[5] != 'o' || place[8] != 'o')));
	cout << "\tTIC TAC TOE\n\n";
	if (turn <= 9)
	{
		if (turn % 2 == 1)
			cout << "Player O won\n\n";
		else
			cout << "Player X won\n\n";
	}
	else
		cout << "It is a Draw\n\n";
	return 0;
}