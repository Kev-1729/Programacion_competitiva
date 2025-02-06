#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num, menor, suma = 0;
    cin >> n;

    cin >> num; 
    menor = num;
    suma = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        suma += num;
        if (num < menor) {
            menor = num;
        }
    }

    cout << (suma - menor) << '\n';

    return 0;
}
