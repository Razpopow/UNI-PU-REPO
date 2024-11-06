#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double speed = 400.0;
	double lenght = 0.8;
	double mass = 0.005;

	double acceleration = (speed * speed) / (2 * lenght);

	double force = mass * acceleration;

	cout << "Nutonite sa : " << force << "N" << endl;

}

