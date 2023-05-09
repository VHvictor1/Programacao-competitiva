#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char a[7];
    
    scanf("%d", &n);

    while (n != 0)
    {
        scanf("%s", a);
        if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        n--;
    }

    return 0;
}