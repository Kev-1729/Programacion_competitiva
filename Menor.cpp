#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num, menor, suma = 0;
    cin >> n;

    cin >> num; // Leer el primer juguete
    menor = num;
    suma = num;

    for (int i = 1; i < n; i++) { // Empezamos desde 1 porque ya leímos el primero
        cin >> num;
        suma += num;
        if (num < menor) {
            menor = num;
        }
    }

    cout << (suma - menor) << '\n';

    return 0;
}
