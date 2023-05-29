// OBS: Rodar usando o C++ 20;
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
int main(){
    long long int n;
    int result;
 
    cin >> n;
 
    result = cbrt(n);
    
    if(pow(result, 3) != n){
        cout << -1 << endl;
    }
    else{
    cout << result << endl;
    }
 
    return 0;
}