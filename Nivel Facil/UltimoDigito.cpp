#include <iostream>

using namespace std;

int obtenerUltimoDigito(int A, int B) {
    if (B == 0) return 1;
    int ultimoDigito = A % 10;
    int resultado = 1;

    for (int i = 0; i < B; i++) {
        resultado = (resultado * ultimoDigito) % 10;
    }

    return resultado;
}

int main() {
    int T, A, B;
    cin >> T;

    while (T--) {
        cin >> A >> B;
        cout << obtenerUltimoDigito(A, B) << endl;
    }

    return 0;
}
