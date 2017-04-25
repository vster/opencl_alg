#include <iostream>
using namespace std;

int gcd (int x, int y)
{
	int g;
	if(x < 0)
		x = -x;
	if(y < 0)
		y = -y;
	if((x + y) == 0)
		return 1;
	g = y;
	while(x > 0)
	{
		g = x;
		x = y % x;
		y = g;
	}
	return g;
}

int main()
{
	int c, z, g;
	char ch;

	do{
		cout << "Enter two numbers: ";
		cin >> c >> z;
		g = gcd(c, z);
		cout << "GCD of " << c << " and "
			 << z << " is " << g << endl;
		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');
	
	return 0;
}