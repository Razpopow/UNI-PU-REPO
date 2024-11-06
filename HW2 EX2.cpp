#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a; 

    
    int d1 = a / 1000;       
    int d2 = (a / 100) % 10; 
    int d3 = (a / 10) % 10;  
    int d4 = a % 10;         

    
    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
        cout << 1 << endl;  
    }
    else {
        cout << 0 << endl;  
    }

    return 0;
}