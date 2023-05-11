#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    if (n % 500 == 0) {
        cout << "Sim" << endl;
    } else if (a >= n) {
        cout << "Sim" << endl;
    } else if (n % 500 <= a) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }

    return 0;
}