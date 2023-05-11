
#include <bits/stdc++.h>
#include <map>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    vector<string> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]; 
        b.at(i) = a.at(i);
    }
    sort(a.begin(),a.end());
 
    map<string, int> matriculas;
     for ( int i = 0; i < n; i++)
     {
        matriculas[a.at(i)] = i;
     }
    
    for ( int i = 0; i < n; i++){
        printf("%d ", matriculas[b.at(i)]);
    }
     
    return 0;
}   