// Doga Barsgan
// Implementations of Fast Exponentiation and Fibonacci Algorithms

#include <iostream>

using namespace std;

int fastExpo(int a, int b)
{

	if (b == 0)
	{
		return 1;
	}

	if (b % 2 == 0)
	{
		int tmp = fastExpo(a, b / 2);
		return tmp * tmp;
	}
	else
	{
		int tmp = fastExpo(a, (b - 1) / 2);
		return a * tmp * tmp;
	}

}

int fibonacci(int a)
{

	if (a == 0)
	{
		return 0;
	}

	if (a == 1)
	{
		return 1;
	}

	int tmp = fibonacci(a - 1) + fibonacci(a - 2);

	return tmp;

}

int main()
{

	cout << fastExpo(2,12) << endl;

	cout << fibonacci(8) << endl;

	return 1;
	
}
