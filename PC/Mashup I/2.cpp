#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int aux = 0;

    for (int i = n; i >= 1; i--) {
        if (s >= i) {
            aux += s / i;
            s %= i;
        }
        if (s == 0) break;
    }

    cout << aux << endl;

    return 0;
}