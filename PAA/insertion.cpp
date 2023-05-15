#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

long long int intertionSort(vector<long long int> &array)
{
    long long int k, j;
    long long int iterations = 0;
    for (long long int i = 1; i < array.size(); i++)
    {
        k = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > k )
        {
            array[j + 1] = array[j];
            j -= 1;
            iterations++;
        }
      
      array[j + 1] = k;
    }

    return iterations;
}

int main()
{
    long long int x, y;
    scanf("%lld", &x);
    for (long long int t = 0; t < x; t++)
    {
        scanf("%lld", &y);
        vector<long long int> valueArray(y);
        for (long long int i = 0; i < y; i++)
        {
            scanf("%lld", &valueArray[i]);
        }
        long long int iterations = intertionSort(valueArray);
        printf("%lld", iterations);
    }
}