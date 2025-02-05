#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n;
    const double VOLUMEN_MOLAR = 22.414; 
    
    cin >> n;
    
    double v = n * VOLUMEN_MOLAR;
    
    cout << fixed << setprecision(3) << v << " l";
    
    return 0;
}
