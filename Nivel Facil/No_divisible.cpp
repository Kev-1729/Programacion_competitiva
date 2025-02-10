#include <iostream>
using namespace std;

long long sumatoria(long long n) {
    return (n * (n + 1)) / 2;
}

long long suma_rango(long long A, long long B, long long C) {
    long long suma_total = sumatoria(B) - sumatoria(A - 1);
    long long suma_multiplos = C * (sumatoria(B / C) - sumatoria((A - 1) / C));
    return suma_total - suma_multiplos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        long long A, B, C;
        cin >> A >> B >> C;
        cout << suma_rango(A, B, C) << "\n";
    }

    return 0;
}
