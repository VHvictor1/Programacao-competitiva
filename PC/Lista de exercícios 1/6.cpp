#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
bool is_beautiful(int year) {
    string ano = to_string(year);
    set<char> digito(ano.begin(), ano.end());
    return digito.size() == ano.size();
}
 
int main() {
    int x;
    cin >> x;
 
    int year = x + 1;
    while (!is_beautiful(year)) {
        year++;
    }
 
    cout << year << endl;
    return 0;
}