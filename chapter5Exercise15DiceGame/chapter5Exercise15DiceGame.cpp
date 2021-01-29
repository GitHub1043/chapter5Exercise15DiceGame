// This program simulates a dice game using a function
// Written by: Ayden Holgate
// Date: Jan. 27, 2021

// chapter5Exercise15DiceGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void DiceGame(int dice1, int dice2, int risk, int& points){
	int total;

	cout << "The roll is " << dice1 << " and " << dice2 << endl;

	total = dice1 + dice2;

	if(total % 2 == 0){
		points = points + (risk * 2);
		cout << "You Win." << endl;
		
	}
	else{
		points = points - risk;
		cout << "You Lose." << endl;
	}

	cout << "You have " << points << " points" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{// Start of program
	int risk, dice1, dice2, points = 1000;
	char play = 'Y';
	srand(time(0));

while(play == 'Y'){
	cout << "Points to risk: ";
	cin >> risk;

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	DiceGame(dice1, dice2, risk, points);

	cout << "Play again? (Y/N) ";
	cin >> play;
}

	cout << "Final Score: " << points << endl;

	return 0;
}// End of program

