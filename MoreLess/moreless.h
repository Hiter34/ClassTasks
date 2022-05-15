/*
-rogozin
- more_less - program guesses youe number with frames
*/

#pragma once
#include <iostream>
using namespace std;


class MoreLess
{
public:
	MoreLess();
	void start();

private:
	bool guess();
	void enter();
	pair<int, int>frames;
	int secret;

};

