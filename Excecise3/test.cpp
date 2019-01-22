#include <iostream>


using namespace std;

int main()
{
	int prime, i;
	for (i = 1; i <= 1000; i++)
	{
		for (prime = 1; prime <= i; prime++)
		{
			if (i%prime == 0)
				break;
			else if (i == prime++)
				cout << i << " ";
		}
	}
	return 0;
}