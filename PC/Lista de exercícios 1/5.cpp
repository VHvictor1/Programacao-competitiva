#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);

    int dias = 0;
    for (int k = 1; k <= n; ++k)
    {
        int i;
        while (i < n && a[i] < k)
            i++;
        if (i == n)
            break;
        ++dias;
        a[i] = 0;
    }

    cout << dias << '\n';
    return 0;
}