#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	int inGuesses;
	int icMin;
	int icMax;
	int iguess;
	inGuesses = 8;
	icMin = 1;
	icMax = 1000;
	int icNumber;
	srand(time(nullptr));
	icNumber = rand() % icMax + icMin;
	
	cout << " The computer has thought of a number between " << icMin << " and " << icMax << " you have " << inGuesses << " guesses Good Luck!!" << endl;

	bool bnGuessed = false;


	while (bnGuessed == false&& inGuesses != 0) {
	cout<<"Please input a number" << endl;
	cin >> iguess;


	if (iguess<icMin || iguess>icMax ) {
		cout << "Please input a valid number" << endl;
		cout << iguess << endl;
	}

	else if (iguess == icNumber) {
		inGuesses = inGuesses - 1;
		cout << "Good job you guessed with " << inGuesses << " guesses remaining" << endl;
		bnGuessed = true;
	}



	else if (iguess < icNumber) {
		inGuesses = inGuesses - 1;
		if (inGuesses != 0) {
			cout << "Looks like you need to guess Higher " << inGuesses << " guesses remaining" << endl;
		}
		else {
			cout << "You did not get it, it was" << icNumber << " better luck next time!!!" << endl;
		}
	}


	else if (iguess > icNumber) {
		inGuesses = inGuesses - 1;
		if (inGuesses != 0) {
			cout << "Looks like you need to guess Lower " << inGuesses << " guesses remaining" << endl;
		}
		else {
			cout << "You did not get it, it was "<< icNumber<<" better luck next time!!!"<< endl;
		}
	}

	}



	system("pause");
	return 0;
}