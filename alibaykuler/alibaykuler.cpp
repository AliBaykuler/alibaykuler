#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, n, sum, product;
	product = 1;
	sum = 0;
	cout << "Input n >= 2, n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;

	if (x < 0)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				sum = sum + (1 / x - i - j);
			}
		cout << sum << endl;
		}
	}
	else
	{
		for (int i = 1; i <= n - 3; i++)
		{
			product = product * (x - i);
			cout << product << endl;
		}
	}

	return 0;
}