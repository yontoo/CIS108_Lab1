#include <iostream>

using namespace std;


int main()
{
	int num = 1000;
	int sum = 0;
	int product = 1;
	for (int i = x; i > 0; i--)
	{
		bool not_prime = false;
		for (int j = 2; j < i; j++)
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


