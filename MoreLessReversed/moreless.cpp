/*
-rogozin
- more_less - program guesses youe number with frames
*/

#include "moreless.h"
#include <iostream>
#include "windows.h"
using namespace std;


void MoreLess::start()
{
	cout << "Enter your number >> ";
	for (int i = 1; i < 101; i++)
	{
		cout << "Number " << i << endl << endl;
		enter(i);
		guess(0, 100);
	}
	
}

void MoreLess::enter(int check)
{
	this->secret = check;
}



void MoreLess::guess(int left = 0, int  right = 100)
{
#ifdef DEBUG
	Sleep(250);
#endif

	int middle = (left + right) / 2;
	if (this->secret == middle) { cout << "It's " << middle << endl << endl << endl;; return; }
	else if (this->secret < middle) { cout << "It's less than " << middle << endl << endl; guess(left, middle); }
	else { cout << "It's more than " << middle << endl << endl; guess(middle+1, right); }
}