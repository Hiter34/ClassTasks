/*
-rogozin
- more_less - program guesses youe number with frames
*/

#include "moreless.h"
#include <iostream>
#include <ctime>
using namespace std;


MoreLess::MoreLess()
{
}

void MoreLess::start()
{
	cout << "Please enter frames" << endl;
	enter();
	cout << "Now guess number" << endl;
	while (guess());
}

void MoreLess::enter()
{
	cin >> this->frames.first >> this->frames.second;
	if (frames.first > frames.second) { swap(this->frames.first, this->frames.second); }
	srand(time(0));
	this->secret = (frames.first + (rand() % (frames.second-frames.first+1)));
}



bool MoreLess::guess()
{
	int check = 0;
	cin >> check;
	if (check > secret) { cout << "Less" << endl; return true; }
	else if (check < secret) { cout << "More" << endl; return true; }
	else { cout << "Yay! You guessed it"; return false; }

}