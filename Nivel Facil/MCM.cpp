#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mcm(int a, int b) {
    return (a / mcd(a, b)) * b; 
}
int main() {
    int n;
    cin >> n;
    
    int resultado;
    cin >> resultado;
    
    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        resultado = mcm(resultado, num);
    }
    
    cout << resultado << endl;
    return 0;
}
