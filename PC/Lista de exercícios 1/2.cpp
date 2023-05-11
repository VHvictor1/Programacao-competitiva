#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    int max_value;
    int total;
 
    cin >> n;
 
    vector<int> values(n);
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }
 
    max_value = *max_element(values.begin(), values.end());
    for (int i = 0; i < values.size(); i++)
    {
 
        total += max_value - values[i];
    }
    printf("%d\n", total);
 
    return 0;
};