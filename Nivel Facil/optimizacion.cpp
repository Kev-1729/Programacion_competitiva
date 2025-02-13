#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int calcularDistanciaManhattan(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> entregas(N);
    
    for (int i = 0; i < N; i++) {
        cin >> entregas[i].first >> entregas[i].second;
    }

    sort(entregas.begin(), entregas.end());

    int x_actual = 0, y_actual = 0;
    int distancia_total = 0;

    for (const auto& entrega : entregas) {
        distancia_total += calcularDistanciaManhattan(x_actual, y_actual, entrega.first, entrega.second);
        x_actual = entrega.first;
        y_actual = entrega.second;
    }

    distancia_total += calcularDistanciaManhattan(x_actual, y_actual, 0, 0);

    cout << distancia_total << endl;

    return 0;
}
