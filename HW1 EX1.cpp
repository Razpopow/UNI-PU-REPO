#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	const double R = 6340.0;
	const double h = 280.0;
	double speed;

	cout << "Vuvedete sredna skorost na kosmicheskiq korab: ";
	cin >> speed;

	double orbitRad = R + h;
    double orbitLen = 2 * 3.14 * orbitRad;
    double time = orbitLen / speed;

	cout << "vremeto za edna obikolka e: " << time << " chasa.";

	return 0;
}
