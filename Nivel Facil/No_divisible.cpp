#include <iostream>

using namespace std;

long long sumatoria(long long x) {
    return x * (x + 1) / 2;
}

long long sum_multiples(long long n, long long c) {
    if (n < 0) return 0;
    long long m = n / c;
    return c * sumatoria(m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a > b) swap(a, b);
        
        long long suma_total = sumatoria(b) - sumatoria(a - 1);
        long long suma_multiplos = sum_multiples(b, c) - sum_multiples(a - 1, c);
        
        cout << (suma_total - suma_multiplos) << '\n';
    }
    
    return 0;
}
