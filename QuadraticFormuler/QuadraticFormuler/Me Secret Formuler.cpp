//Clint Mucha's Quadratic Calculator! 2/6/15

#include<iostream>
#include<cmath>
using namespace std;

int main()
{	
	//Have you met my... Variables?
	float A = 0;
	float B = 0;
	float C= 0;
	float y1 = 0;
	float check = 0;
	float y2 = 0;
Start:
	system("cls");
	cout << "Welcome to the quadratic calculator of your dreams.\nOr nightmares, as it is math related." << endl;
	cout << "Let's start at the beginning (Ax + Bx = C)." << endl;
	cout << "The A value, if you please: ";
	cin >> A;
	cout << "Now the B value: ";
	cin >> B;
	cout << "And finally, the C value: ";
	cin >> C;
	//Checking if B*B - 4*A*C isn't negative. I mean, there's no real solution if it's negative.
	check = B*B;
	check += -4*A*C;
	if (check < 0)
	{
		cout << "Welp, there's no real solution here." << endl;
		system("pause");
		goto Start;
	}
	else
	{
		//Now that we've checked that other equation, let's get to the bottom of this mystery, gang!
		y1 += -B;
		y2 += -B;
		check = sqrt(check);
		//More checks, but no balances (a little US Government humor for you there).
		y1 += check;
		y2 += -check;
		//After we divide by 2A, we'll see who was behind that mask (equation) and this mystery (also refering to the equation)!
		y1 = y1/(2*A);
		y2 = y2/(2*A);
		cout << "And the values are "<<y1<<" and "<<y2<<"!"<< endl;
		system("pause");
		goto Start;
	}
	return 0;
}