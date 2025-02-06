#include <iostream>
#include <vector>

using namespace std;

int obtenerUltimoDigito(int A, int B) {
    if (B == 0) return 1; 

    int ultimoDigito = A % 10; 
    int resultado = 1;

    B = B % 4 == 0 ? 4 : B % 4;

    for (int i = 0; i < B; i++) {
        resultado = (resultado * ultimoDigito) % 10;
    }

    return resultado;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, A, B;
    cin >> T;
    
    vector<int> resultados(T); 

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        resultados[i] = obtenerUltimoDigito(A, B);
    }

    for (int i = 0; i < T; i++) {
        cout << resultados[i] << '\n';
    }

    return 0;
}
