/*
-rogozin fizzbuzz
-15.05.22
*/

#include <iostream>

void FizzBuzz(int number = 1)
{
	if (number < 101)
	{
		if (number % 3 == 0) std::cout << "Fizz";
		if (number % 5 == 0) std::cout << "Buzz";
		if (number % 3 != 0 && number % 5 != 0) std::cout << number;
		std::cout << std::endl;
		FizzBuzz(number + 1);
	}
	
}


int main()
{
	FizzBuzz();
}

