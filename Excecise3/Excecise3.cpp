#include <iostream>

using namespace std;

int main()
{
	//Create our variables, num being where the loop starts finding prime numbers from. We need sum and product created here to use in the if statement later.
	int num = 1000;
	int sum = 0;
	int product = 1;

	for (int i = num; i > 1; i--)		//Our first For loop. Starts by initializing i to be num. i, in this case, is the number being tested to be prime.
	{
		bool not_prime = false;			//Boolean variable to be used as an indicator if a number is prime or not later in the function.
		for (int j = 2; j < i; j++)		//Another For loop to test if i is a prime number.
		{
			if (i%j == 0)				
			{
				not_prime = true;
				j = i;
			}
		}
		if (not_prime == false)
		{
			sum = sum + i;
			product = product * i;
		}
	}
	cout << "The sum of all prime numbers between 1 and 1000 is: " << sum << endl;
	cout << "The product of all prime numbers between 1 and 1000 is: " << product;

}

