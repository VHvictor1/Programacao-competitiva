#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void mergesort(vector<int> &array, int arrayStart, int middle, int arrayFinish)
{

    vector<int> tempArray;

    int i = arrayStart;
    int j = middle + 1;


    while (i <= middle && j <= arrayFinish)
    {
        if (array[i] <= array[j])
        {
            tempArray.push_back(array[i]);
            i++;
        }
        else
        {
            tempArray.push_back(array[j]);
            j++;
        }
    }

    while (i <= middle)
    {
        tempArray.push_back(array[i]);
        i++;
    }

    while (j <= arrayFinish)
    {
        tempArray.push_back(array[j]);
        j++;
    }   

    for (int i = arrayStart; i <= arrayFinish; i++)
        array[i] = tempArray[i - arrayStart];
}

void merge(vector<int> &mergeArray, int begin, int end)
{
    if (begin < end)
    {
        int middle = (begin + end) / 2;
        merge(mergeArray, begin, middle);
        merge(mergeArray, middle + 1, end);
        mergesort(mergeArray, begin, middle, end);
    }
}

int main()
{
    vector<int> mergeArray;
    string str;

    getline(cin, str);
    stringstream is(str);

    while (is >> str)
    {
        mergeArray.push_back(stoi(str));
    };

    merge(mergeArray, 0, mergeArray.size() - 1);

    for (auto i = 0; i < mergeArray.size(); i++)
    {
        cout << mergeArray[i] << " ";
    }

    return 0;
}