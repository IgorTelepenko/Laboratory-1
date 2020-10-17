#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,m,lastDigit,decimal = 0,DigitPower;
	cout << "the number = ";
	cin  >> a;
	cout << "m = ";
	cin >> m;
	
	DigitPower = 0;
	while(a!=0)
	{
		lastDigit = a%10;
		a=(a-lastDigit)/10;
		
		decimal+=lastDigit*pow(m,DigitPower);
		DigitPower++;
	}
	
	cout << "the decimal number = " << decimal;
	return 0;
	}
