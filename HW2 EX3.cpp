#include <iostream>
#include <cmath>
using namespace std;


double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}


double area(double a, double b, double c) {
    double p = (a + b + c) / 2;  
    return sqrt(p * (p - a) * (p - b) * (p - c));  
}

int main() {
    
    double x1 = -2, y1 = 2.5;
    double x2 = 5, y2 = 2.5;
    double x3 = 1, y3 = -1.5;

    
    double a = distance(x2, y2, x3, y3);  
    double b = distance(x1, y1, x3, y3);  
    double c = distance(x1, y1, x2, y2);  

    
    double S = area(a, b, c);

    
    double p = (a + b + c) / 2;

    
    double R = (a * b * c) / (4 * S);

    
    double r = S / p;

    
    cout << "Radius na opisanata okrajnost (R): " << R << endl;
    cout << "Radius na vpisanata okrajnost (r): " << r << endl;

    return 0;
}