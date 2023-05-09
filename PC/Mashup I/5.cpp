#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a, b;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(a - b > 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }
    return 0;
}