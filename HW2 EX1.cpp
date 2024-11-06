#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int b;
    
    cout << "Vuvedete polojitelno realno chislo x: ";
    cin >> x;
    
    if (x <= 0) {
        cout << "Greshka: Chisloto trqbva da e polojitelno." << endl;
        return 1;
    }

    double fractionalPart = x - floor(x);

    b = static_cast<int>(floor(fractionalPart * 10));

    cout << "Parvata cifra na drobnata chast e: " << b << endl;

    return 0;
}
