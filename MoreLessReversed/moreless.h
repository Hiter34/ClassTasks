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

	void start();

private:
	void guess(int left, int  right );
	void enter(int check);
	pair<int, int>frames = {1,100};
	int secret;

};

