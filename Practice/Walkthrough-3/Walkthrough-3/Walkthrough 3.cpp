#include <iostream>

// Name: Navneet Kaur
// Date September 28, 2022

using namespace std;

int main()
{
	cout << "Walkthruogh 3" << endl;

	int charChoice = 0;
	cout << "Please choose a difficulty level:" << endl;
	cout << "\t 1) EASY" << endl;
	cout << "\t 2) MEDIUM" << endl;
	cout << "\t 3) HARD" << endl;

	int difficultyChoice = 0;
	cin >> difficultyChoice;

	const int EASY = 1;
	const int MEDIUM = 2;
	const int HARD = 3;

	if (difficultyChoice == EASY)
	{
		charChoice++;
	}
	else if (difficultyChoice == MEDIUM)
	{
		charChoice =  3;
	}
	if (difficultyChoice == HARD)
	{
		charChoice = 7;
	}

	int comicChoice = 0;

	const int DC = 1;
	const int Marvel = 2;
	const int Image = 3;
	const int BoomStudios = 4;

	if (difficultyChoice == EASY || difficultyChoice == HARD)
	{
		cout << " Which would you prefer most?" << endl;
		cout << "\t 1) DC" << endl;
		cout << "\t 2) Marvel" << endl;
		cout << "\t 3) Image" << endl;
		cout << "\t 4) BoomStudios" << endl;

		cin >> comicChoice;

		if (comicChoice == DC)
		{
			charChoice += 30;
		}
		else if (comicChoice == Marvel)
		{
			charChoice += 10;
		}
		else if (comicChoice == Image)
		{
			charChoice += 20;
		}
		if (comicChoice == BoomStudios)
		{
			charChoice += 40;

		}
	}
	
	if (comicChoice == Marvel && difficultyChoice == HARD)
	{
		cout << "Please select your superpower" << endl;
		cout << "\t 1) FLIGHT" << endl;
		cout << "\t 2) STRENGTH" << endl;
		cout << "\t 3) SPEED" << endl;
		cout << "\t 4) HEALING" << endl;
		cout << "\t 5) MAGIC" << endl;

		int powerchoice = 0;
		cin >> powerchoice;

		const int FIGHT = 1;
		const int STRENGTH = 2;
		const int SPEED = 3;
		const int HEALING = 4;
		const int MAGIC = 5;


		if (powerchoice == FIGHT)
		{
			charChoice += 10;
		}
		else if (powerchoice == STRENGTH)
		{
			charChoice += 20;
		}
		else if (powerchoice == SPEED)
		{
			charChoice += 50;
		}
		else if (powerchoice == HEALING)
		{
			charChoice += 30;

		}
		if (powerchoice == MAGIC)
		{
			charChoice += 60;

		}
	}
	cout << "Your charater is:" << endl;

	if (charChoice <= 0)
	{
		cout << "CondimentKing" << endl;
	}
	else if (charChoice > 0 && charChoice <= 20)
	{
		cout << "Rhino" << endl;
	}
	if (charChoice > 20 && charChoice <= 40)
	{
		cout << "SpiderMan" << endl;
	}
	if (charChoice > 40 && charChoice <= 60)
	{
		cout << "Mario" << endl;
	}
	if (charChoice > 60 && charChoice <= 80)
	{
		cout << "BatMan" << endl;
	}

	const int CondimentKing = 1;
	const int Rhino = 2;
	const int SpiderMan = 3;
	const int Mario = 4;
	const int BatMan = 5;


	return 0;
}