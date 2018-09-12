#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int doorGame() {
	int userDoorChoice;

	cout << "Pick one of the trhee doors\nDoor1\nDoor2\nDoor3";
	cin >> userDoorChoice;

	if (userDoorChoice == 1) {
	}
	else if (userDoorChoice) {
	}
	else if (userDoorChoice) {
	}
	else
		cout << "Not available";
	
	return 0;
}
int randomGame() {
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;
	cout << "Enter a number: ";
	cin >> numChoice;
	if (numChoice == secret) {
		cout << "You won! ";
	}
	else {
		cout << " You lose, the number was " << secret << " ";
	}
	return 0;
}
int randomGame2() {
	int numb1;
	int secret2;
	srand(time(NULL));
	secret2 = rand() % 100 + 1;
	cout << "Enter a number: ";
	cin >> numb1;
	if (numb1 == secret2) {
		cout << "You Won!";
	}
	else {
		cout << " You lose, the number was " << secret2 << " ";
	}
	return 0;
}
int main()
{
	int pickGame;
	do {
		cout << "Welcome to my fabulous Game\nGame 1 or Game 2 or 3 to Quit" << endl;
		cin >> pickGame;

		if (pickGame == 1)
		{
			doorGame();
		}
		else if (pickGame == 2)
		{
			randomGame();
		}
	} while (pickGame != 3);
	system("pause");
	return 0;
}