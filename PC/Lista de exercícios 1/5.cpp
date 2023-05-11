#include <iostream>
 
using namespace std;
 
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
 
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        int value = i;
        int soma = 0;
        while (value > 0)
        {
            soma += value % 10;
            value /= 10;
        }
        if (soma >= a && soma <= b)
        {
            total += i;
        }
    }
 
    cout << total << endl;
    return 0;
}