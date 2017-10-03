#include <iostream>

using namespace std;

int main()
{
	int answer = (rand() % 100 + 1);
	int guess;
	int i = 0;
	cout << "Guess The Number!" << endl << endl;
	while(i < 5)
	{
		cout << "Input a guess" << endl;
		cin >> guess;
		if(guess == answer){cout << "You win, good for you." << endl; i = 5;}
		else
		if(guess > answer){cout << "Too high, try again" << endl;}
		else
		if(guess < answer){cout << "Too low, try again" << endl;}
	i++;
	}
	return 0;
}