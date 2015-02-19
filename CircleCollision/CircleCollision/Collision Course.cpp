///Clint Mucha's  Circle Collision! 2/9/15

#include<iostream>
#include<cmath>
using namespace std;

//Let's get our darling variables ready, shall we?
struct Circle2D
{
	float h;
	float k;
	float r;
};

//Here we see the birth of two circles. Nature's amazing, isn't it?
Circle2D Circle1;
Circle2D Circle2;
double distancex = 0;
double distancey = 0;
float d = 0;
double radsum = 0;

int main()
	//I'll need to see some ID (or 6 numerical values, if you don't have an ID).
{
	Start:
		system("cls");
		cout << "You find yourself trying to find if two circles collide or not." << endl;
		cout << "This will only work if you know the Center(H,K) and Radius(r) of your circles." << endl;
		cout << "What's the first circle's center H value? " << endl;
		cin >> Circle1.h;
		cout << "What's the first circle's center K value? " << endl;
		cin >> Circle1.k;
		cout <<"What's the first circle's radius: " << endl;
		cin >> Circle1.r;
		cout << "What's the second circle's center H value? " << endl;
		cin >> Circle2.h;
		cout << "What's the second circle's center K value? " << endl;
		cin >> Circle2.k;
		cout <<"What's the second circle's radius? " << endl;
		cin >> Circle2.r;
		//Just solve your differences, already!
		distancex = Circle2.h - Circle1.h;
		distancey = Circle2.k - Circle1.k;
		//The Pythagorean Theory was founded by Pythagoras, who came from Hellinistic culture back when Ancient Greek and Ancient Asian cultures became mixed.
		d += distancex*distancex;
		d += distancey*distancey;
		d = sqrt(d);
		radsum = Circle1.r + Circle2.r;
		cout << "\nThe distance between the centers is: "<<d<<"!"<<endl;
		cout << "The sum of the radii is: "<<radsum<<"!"<<endl;
		//And now we see if the circles drunkenly stumble into each other...
		if (d <= radsum)
		{
			cout << "The circles collide!"<< endl;
			system("pause");
			goto Start;
		}
		else
		{
			cout << "The circles don't collide!"<< endl;
			system("pause");
			goto Start;
		}
		return 0;
}