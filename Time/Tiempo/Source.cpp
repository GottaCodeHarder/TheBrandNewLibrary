#include <iostream>
using namespace std;

struct time
{
	int day;
	int hours;
	int seconds;

	~time(){};
};

struct time a;

void addSeconds(int seconds)
{
	a.seconds = seconds;
}

void orderTime()
{
	int c = a.seconds;
	a.seconds = c % 60;
	c = c / 60;
	a.hours = c % 60;
	c = c / 60;
	a.day = c % 24;
}

void coutTime()
{
	cout << "Dies: " << a.day << endl;
	cout << "Hores: " << a.hours << endl;
	cout << "Segons: " << a.seconds << endl;
}

int main()
{
	cout << "Segons: ";
	int nombre;
	cin >> nombre;
	addSeconds(nombre);
	orderTime();
	coutTime();
	system("PAUSE");
}